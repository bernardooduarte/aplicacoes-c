#include <stdio.h>
#include <locale.h>

void maiorNum(int MAX);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int MAX;
    printf("Insira a quantidade de números: ");
    scanf("%d", &MAX);

    maiorNum(MAX);

    system("pause");

    return 0;
}

void maiorNum(int MAX) {
    int i;
    int numeros[MAX];

    for (i = 0; i < MAX; i++) {
        printf("Insira a %da nota: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int maior = numeros[0];

    for (i = 1; i < MAX; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior número é: %d\n", maior);
}
