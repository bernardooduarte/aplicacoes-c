#include <stdio.h>
#include <locale.h>

void numPar(int num);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Insira o número inteiro positivo: ");
    scanf("%d", &num);

    numPar(num);

    return 0;
}

void numPar(int num) {
    int i = 1;

    if (num <= 0) {
        return;  // Não é necessário retornar um valor em uma função do tipo "void"
    }

    while (i <= num) {
        if (i % 2 == 0) {  // Deve-se verificar o valor de "i" em vez de "num"
            printf("%d ", i);
        }
        i++;
    }
}
