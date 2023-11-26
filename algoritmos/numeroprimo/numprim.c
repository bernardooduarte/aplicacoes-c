#include <stdio.h>
#include <locale.h>

int numPrim(int num);

int main()
{
    int num;

    setlocale(LC_ALL, "Portuguese");

    printf("Insira o número: ");
    scanf("%d", &num);

    if (numPrim(num))
    {
        printf("É primo\n");
    }
    else
    {
        printf("Não é primo\n");
    }

    return 0;
}

int numPrim(int num)
{
    int i = 2;

    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            return 0; // não é primo
        }
        i++;
    }

    return 1; // é primo
}
