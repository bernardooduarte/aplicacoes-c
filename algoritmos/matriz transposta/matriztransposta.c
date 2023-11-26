#include <stdio.h>
#include <locale.h>

#define L 4
#define C 4

void calcularMatrizTransposta(int matriz[L][C]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[L][C];

    int i, j;
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Insira o %dº número da %dª coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    calcularMatrizTransposta(matriz);

    system("pause");

    return 0;
}

void calcularMatrizTransposta(int matriz[L][C]) {
    int matrizTransposta[C][L];
    int i, j;

    for (i = 0; i < C; i++) {
        for (j = 0; j < L; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz Transposta:\n");

    for (i = 0; i < C; i++) {
        for (j = 0; j < L; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }
}
