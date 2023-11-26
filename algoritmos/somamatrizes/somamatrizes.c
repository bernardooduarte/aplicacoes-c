#include <stdio.h>


void somarMatrizes(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}


void exibirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    somarMatrizes(matriz1, matriz2, resultado);

    printf("A soma das matrizes é:\n");
    exibirMatriz(resultado);

    return 0;
}
