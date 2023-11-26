#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int dia, mes;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o dia: ");
    scanf("%d", &dia);

    printf("Insira o mês: ");
    scanf("%d", &mes);

    if (dia < 1 || dia > 31 || mes < 1 || mes > 12)
    {
        printf("Data inválida.\n");
        return 1;
    }

    char* meses[12] =
    {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
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

    printf("Mês: %s\n", meses[mes - 1]);
    printf("Quinzena: %s\n", quinzena);

    system("pause");

    return 0;
}
