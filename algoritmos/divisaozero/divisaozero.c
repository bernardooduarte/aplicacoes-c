#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, divisao;

    printf("Insira o primeiro número:");
    scanf("%f", &numero1);

    printf("Insira o segundo número:");
    scanf("%f", &numero2);

    divisao = numero1 / numero2;

    if (numero2 != 0)
    {


        printf("O resultado da divisão é: %.2f\n", divisao);
    }
    else
    {
        printf("Não foi possível fazer a divisão, pois o segundo número é igual a 0\n");

    }

    system("pause");
    return 0;

    }
