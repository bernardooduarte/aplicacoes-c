#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int dia, mes;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o dia: ");
    scanf("%d", &dia);

    printf("Insira o m�s: ");
    scanf("%d", &mes);

    if (dia < 1 || dia > 31 || mes < 1 || mes > 12)
    {
        printf("Data inv�lida.\n");
        return 1;
    }

    char* meses[12] =
    {
        "Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    char* quinzenas[2] =
    {
        "primeira quinzena", "segunda quinzena"
    };

    char* quinzena;

    if (dia <= 15)
    {
        quinzena = quinzenas[0];
    }
    else
    {
        quinzena = quinzenas[1];
    }

    printf("M�s: %s\n", meses[mes - 1]);
    printf("Quinzena: %s\n", quinzena);

    system("pause");

    return 0;
}
