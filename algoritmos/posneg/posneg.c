#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float numero;

    printf("Insira o n�mero:");
    scanf("%f", &numero);

    if (numero > 0.0)
    {

        printf("O n�mero � positivo\n");
    }
    else
    {
        printf("O n�mero � negativo\n");

    }

    system("pause");
    return 0;




}
