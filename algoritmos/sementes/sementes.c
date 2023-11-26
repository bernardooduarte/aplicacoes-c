#include <stdio.h>
#include <locale.h>

int SomarGerminacao(int MAX, int sementes[MAX]);
float calcularMediaGerm(int MAX, int somarGraus);
int calcularSemAcimMed(int MAX, int sementes[MAX], float media);
int calcularPorcentagem(int MAX, int qtdsemac);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int MAX;
    printf("Insira a quantidade de sementes: ");
    scanf("%d", &MAX);

    int sementes[MAX];
    int i;

    for (i = 0; i < MAX; i++) {
        printf("Insira o grau de germinação da %dª semente (1 a 10): ", i + 1);
        scanf("%d", &sementes[i]);

        if (sementes[i] < 1 || sementes[i] > 10) {
            printf("Grau de germinação inválido!\n\n");
            return 1;
        }
    }

    int somarGraus = SomarGerminacao(MAX, sementes);
    float media = calcularMediaGerm(MAX, somarGraus);
    int qtdsemac = calcularSemAcimMed(MAX, sementes, media);
    int porcentagem = calcularPorcentagem(MAX, qtdsemac);

    printf("Somatório: %d\n", somarGraus);
    printf("Grau médio de germinação: %.1f\n", media);
    printf("Quantidade de sementes com germinação acima da média: %d\n", qtdsemac);
    printf("Percentual de sementes com grau de germinação acima da média: %d%%\n\n", porcentagem);

    return 0;
}

int SomarGerminacao(int MAX, int sementes[MAX]) {
    int somarGraus = 0;
    int i;

    for (i = 0; i < MAX; i++) {
        somarGraus += sementes[i];
    }

    return somarGraus;
}

float calcularMediaGerm(int MAX, int somarGraus) {
    return (float)somarGraus / MAX;
}

int calcularSemAcimMed(int MAX, int sementes[MAX], float media) {
    int qtdsemac = 0;
    int i;

    for (i = 0; i < MAX; i++) {
        if (sementes[i] > media) {
            qtdsemac++;
        }
    }

    return qtdsemac;
}

int calcularPorcentagem(int MAX, int qtdsemac) {
    return (qtdsemac * 100) / MAX;
}
