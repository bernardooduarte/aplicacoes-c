#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, divisao;

    printf("Insira o primeiro n�mero:");
    scanf("%f", &numero1);

    printf("Insira o segundo n�mero:");
    scanf("%f", &numero2);

    divisao = numero1 / numero2;

    if (numero2 != 0)
    {


        printf("O resultado da divis�o �: %.2f\n", divisao);
    }
    else
    {
        printf("N�o foi poss�vel fazer a divis�o, pois o segundo n�mero � igual a 0\n");

    }

    system("pause");
    return 0;

    }
