#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    float pnumero, snumero, formula;

    printf("Bem-vindo a calculadora de multiplicação entre dois numeros inteiros!");
    sleep(2);

    printf("\nInsira o primeiro número:");
    scanf("%f", &pnumero);

    printf("Insira o segundo número:");
    scanf("%f", &snumero);

    formula = pnumero * snumero;


    printf("O resultado é %.2f", formula);

    system("pause");


}
