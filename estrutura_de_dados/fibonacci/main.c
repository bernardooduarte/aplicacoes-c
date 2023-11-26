#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci(int n);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Insira o n-nésimo termo da sequência de fibonacci que deseja imprimir: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("%d\n", resultado);

    system("pause");

    return 0;
}

int fibonacci(int n)
{

    if(n == 1 || n == 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
