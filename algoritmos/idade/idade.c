#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    int idade;

    setlocale(LC_ALL, "Portuguese");

    printf("Qual � a sua idade:");
    scanf("%d", &idade);

    if (idade >= 18)
    {

        printf("Voc� � maior de idade\n");
    }
    else
    {

        printf("Voc� � menor de idade\n");
    }

    system("pause");
    return 0;
}
