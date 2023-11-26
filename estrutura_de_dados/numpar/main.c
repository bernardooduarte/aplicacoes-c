#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirNums(int n);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Insira um número n: ");
    scanf("%d", &n);

    imprimirNums(n);

    printf("\n");

    system("pause");

    return 0;
}

void imprimirNums(int n){

    if(n < 1){
        return;
    }

    if(n % 2 == 0){
        printf("%d ", n);
    }

    imprimirNums(n-1);
}
