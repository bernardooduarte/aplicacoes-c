#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int numero, formula;

    printf("Insira o n�mero:");
    scanf("%d", &numero);

    formula = numero % 2;

    if(formula == 0)
    {

        printf("O n�mero � par\n");
    }
    else
    {
        printf("O n�mero � �mpar\n");

    }

    system("pause");
    return 0;

}
