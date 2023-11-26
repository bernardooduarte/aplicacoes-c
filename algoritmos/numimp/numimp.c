#include <stdio.h>
#include <locale.h>

void numImp(int num1, int num2);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Insira os dígitos do número: ");
    scanf("%d %d", &num1, &num2);

    numImp(num1, num2);

    return 0;
}

void numImp(int num1, int num2)
{
    int i = num1 + 1;

    while(i < num2)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}
