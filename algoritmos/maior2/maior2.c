#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int pnumero, snumero;

    printf("Insira o primeiro número: ");
    scanf("%d", &pnumero);

    printf("Insira o segundo número: ");
    scanf("%d", &snumero);

    if(pnumero > snumero)
    {


        printf("O maior número é o %d\n", pnumero);
    }
    else
    {

        printf("O maior número é o %d\n", snumero);
    }

    system("pause");
    return 0;

}
