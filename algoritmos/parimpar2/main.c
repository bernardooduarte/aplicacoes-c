#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int numero, formula;

    printf("Insira o n�mero: ");
    scanf("%d", &numero);

    formula = numero % 2;

    if (formula == 0)
    {
        printf("� par\n");

    }
    else
    {
        printf("� �mpar\n");

    }

    system("pause");

    return 0;
}
