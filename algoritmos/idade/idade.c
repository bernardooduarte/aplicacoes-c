#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    int idade;

    setlocale(LC_ALL, "Portuguese");

    printf("Qual é a sua idade:");
    scanf("%d", &idade);

    if (idade >= 18)
    {

        printf("Você é maior de idade\n");
    }
    else
    {

        printf("Você é menor de idade\n");
    }

    system("pause");
    return 0;
}
