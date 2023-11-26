#include <stdio.h>
#include <locale.h>
#define TAMANHO_MES 30

float temperatura_minima(float temperaturas[TAMANHO_MES]) {
    float minima = temperaturas[0]; // Assume que a primeira temperatura é a mínima

    for (int i = 1; i < TAMANHO_MES; i++) {
        if (temperaturas[i] < minima) {
            minima = temperaturas[i];
        }
    }

    return minima;
}

float temperatura_maxima(float temperaturas[TAMANHO_MES]) {
    float maxima = temperaturas[0]; // Assume que a primeira temperatura é a máxima

    for (int i = 1; i < TAMANHO_MES; i++) {
        if (temperaturas[i] > maxima) {
            maxima = temperaturas[i];
        }
    }

    return maxima;
}

float temperatura_media(float temperaturas[TAMANHO_MES]) {
    float soma = 0.0;

    for (int i = 0; i < TAMANHO_MES; i++) {
        soma += temperaturas[i];
    }

    return soma / TAMANHO_MES;
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    float temperaturas[TAMANHO_MES];

    printf("Digite as temperaturas diárias do mês:\n");

    for (int i = 0; i < TAMANHO_MES; i++) {
        printf("Temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    float minima = temperatura_minima(temperaturas);
    float maxima = temperatura_maxima(temperaturas);
    float media = temperatura_media(temperaturas);

    printf("Temperatura mínima: %.2f\n", minima);
    printf("Temperatura máxima: %.2f\n", maxima);
    printf("Temperatura média: %.2f\n", media);

    return 0;
}

