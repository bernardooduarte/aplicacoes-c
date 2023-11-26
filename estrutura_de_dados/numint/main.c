#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirNumeros(int n);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Insira um número n: ");
    scanf("%d", &n);

    imprimirNumeros(n);

    printf("\n");

    system("pause");

    return 0;
}

void imprimirNumeros(int n) {

    if (n < 1) {
        return;
    }

    imprimirNumeros(n - 1);


    printf("%d ", n);
}
