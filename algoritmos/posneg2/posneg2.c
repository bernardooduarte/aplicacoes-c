#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Insira o número inteiro: ");
    scanf("%d", &num);

    if (num >= 1)
    {

        printf("É positivo\n");
    }
    else if (num < 0)
    {

        printf("É negativo\n");


    }
    else
    {

        printf("O número não é positivo e nem negativo, pois é = 0\n");


    }

    system("pause");
    return 0;





}
