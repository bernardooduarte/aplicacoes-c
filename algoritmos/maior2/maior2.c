#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int pnumero, snumero;

    printf("Insira o primeiro n�mero: ");
    scanf("%d", &pnumero);

    printf("Insira o segundo n�mero: ");
    scanf("%d", &snumero);

    if(pnumero > snumero)
    {


        printf("O maior n�mero � o %d\n", pnumero);
    }
    else
    {

        printf("O maior n�mero � o %d\n", snumero);
    }

    system("pause");
    return 0;

}
