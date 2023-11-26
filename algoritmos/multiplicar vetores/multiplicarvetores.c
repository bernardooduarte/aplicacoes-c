#include <stdio.h>

#define TAMANHO_VETOR 5

void multiplicarVetores(const int vetor1[], const int vetor2[], int vetorResultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetorResultado[i] = vetor1[i] * vetor2[i];
    }
}

void imprimirVetor(const int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor1[TAMANHO_VETOR];
    int vetor2[TAMANHO_VETOR];
    int vetorResultado[TAMANHO_VETOR];

    printf("Digite os elementos do vetor 1:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do vetor 2:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetor2[i]);
    }

    multiplicarVetores(vetor1, vetor2, vetorResultado, TAMANHO_VETOR);

    printf("O vetor resultado da multiplicação é:\n");
    imprimirVetor(vetorResultado, TAMANHO_VETOR);

    return 0;
}
