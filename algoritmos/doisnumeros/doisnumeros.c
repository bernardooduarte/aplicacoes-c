#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    float pnumero, snumero, formula;

    printf("Bem-vindo a calculadora de multiplica��o entre dois numeros inteiros!");
    sleep(2);

    printf("\nInsira o primeiro n�mero:");
    scanf("%f", &pnumero);

    printf("Insira o segundo n�mero:");
    scanf("%f", &snumero);

    formula = pnumero * snumero;


    printf("O resultado � %.2f", formula);

    system("pause");


}
