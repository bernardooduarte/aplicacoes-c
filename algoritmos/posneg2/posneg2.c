#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Insira o n�mero inteiro: ");
    scanf("%d", &num);

    if (num >= 1)
    {

        printf("� positivo\n");
    }
    else if (num < 0)
    {

        printf("� negativo\n");


    }
    else
    {

        printf("O n�mero n�o � positivo e nem negativo, pois � = 0\n");


    }

    system("pause");
    return 0;





}
