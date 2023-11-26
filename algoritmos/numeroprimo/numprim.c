#include <stdio.h>
#include <locale.h>

int numPrim(int num);

int main()
{
    int num;

    setlocale(LC_ALL, "Portuguese");

    printf("Insira o n�mero: ");
    scanf("%d", &num);

    if (numPrim(num))
    {
        printf("� primo\n");
    }
    else
    {
        printf("N�o � primo\n");
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
            return 0; // n�o � primo
        }
        i++;
    }

    return 1; // � primo
}
