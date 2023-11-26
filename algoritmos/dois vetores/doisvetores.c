#include <stdio.h>

int verificarIgualdade(int vetor1[], int tamanho1, int vetor2[], int tamanho2) {
    int i;

    if (tamanho1 != tamanho2) {
        return 0; // Vetores são diferentes
    }

    for (i = 0; i < tamanho1; i++) {
        if (vetor1[i] != vetor2[i]) {
            return 0; // Vetores são diferentes
        }
    }

    return 1; // Vetores são iguais
}

void lerVetor(int vetor[], int tamanho) {
    int i;

    printf("Digite os elementos do vetor: ");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

int main() {
    int tamanho1, tamanho2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1);

    int vetor1[tamanho1];
    lerVetor(vetor1, tamanho1);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamanho2);

    int vetor2[tamanho2];
    lerVetor(vetor2, tamanho2);

    // Verificar se os vetores são iguais
    if (verificarIgualdade(vetor1, tamanho1, vetor2, tamanho2)) {
        printf("Os vetores são iguais.\n");
    } else {
        printf("Os vetores são diferentes.\n");
    }

    return 0;
}
