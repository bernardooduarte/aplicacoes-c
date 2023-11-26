#include <stdio.h>

void imprimirNumeros(int num) {
    int i = 1;

    while (i <= num) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
}

int main() {
    int num;

    printf("Insira o número inteiro positivo: ");
    scanf("%d", &num);

    imprimirNumeros(num);

    return 0;
}
