#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int numero, formula;

    printf("Insira o número: ");
    scanf("%d", &numero);

    formula = numero % 2;

    if (formula == 0)
    {
        printf("É par\n");

    }
    else
    {
        printf("É ímpar\n");

    }

    system("pause");

    return 0;
}
