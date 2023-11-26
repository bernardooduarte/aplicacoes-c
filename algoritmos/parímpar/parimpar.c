#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int numero, formula;

    printf("Insira o número:");
    scanf("%d", &numero);

    formula = numero % 2;

    if(formula == 0)
    {

        printf("O número é par\n");
    }
    else
    {
        printf("O número é ímpar\n");

    }

    system("pause");
    return 0;

}
