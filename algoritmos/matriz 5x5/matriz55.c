#include <stdio.h>

int main() {
    int vet[5][5] = {
        {1, 2, 2, 2, 2},
        {3, 1, 2, 2, 2},
        {3, 3, 1, 2, 2},
        {3, 3, 3, 1, 2},
        {3, 3, 3, 3, 1}
    };

    int somaDiagonalPrincipal = 0;
    int somaAcimaDiagonal = 0;
    int somaAbaixoDiagonal = 0;


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                somaDiagonalPrincipal += vet[i][j];
            } else if (i < j) {
                somaAcimaDiagonal += vet[i][j];
            } else {
                somaAbaixoDiagonal += vet[i][j];
            }
        }
    }


    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma dos elementos acima da diagonal principal: %d\n", somaAcimaDiagonal);
    printf("Soma dos elementos abaixo da diagonal principal: %d\n", somaAbaixoDiagonal);

    return 0;
}
