#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Inclua esta biblioteca para usar malloc e free

float calcularMedia(int *pontos, int MAX);
int melhorPontuacao(int *pontos, int MAX);
int piorPontuacao(int *pontos, int MAX);
void acMed(int *pontos, int MAX, float media);
void abMed(int *pontos, int MAX, float media);
void qtdJuMel(int *pontos, int MAX, int melhor);
void qtdJuPi(int *pontos, int MAX, int pior);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int MAX;
    printf("Insira a quantidade de pontuações da prova: ");
    scanf("%d", &MAX);

    int *pontos = (int *)malloc(sizeof(int) * MAX);

    for (int i = 0; i < MAX; i++)
    {
        printf("Insira a %dª pontuação: ", i + 1);
        scanf("%d", pontos + i);
    }

    calcularMedia(pontos, MAX);
    melhorPontuacao(pontos, MAX);
    piorPontuacao(pontos, MAX);


    float media = calcularMedia(pontos, MAX);
    acMed(pontos, MAX, media);
    abMed(pontos, MAX, media);


    int melhor = melhorPontuacao(pontos, MAX);
    int pior = piorPontuacao(pontos, MAX);

    qtdJuMel(pontos, MAX, melhor);
    qtdJuPi(pontos, MAX, pior);

    free(pontos);

    system("pause");

    return 0;
}

float calcularMedia(int *pontos, int MAX)
{
    int soma = 0;

    for (int i = 0; i < MAX; i++)
    {
        soma += pontos[i];
    }

    return (float)soma / MAX;
}

int melhorPontuacao(int *pontos, int MAX)
{
    int melhor = pontos[0];

    for (int i = 0; i < MAX; i++)
    {
        if (pontos[i] > melhor)
        {
            melhor = pontos[i];
        }
    }

    printf("A melhor pontuação obtida pelo atleta é: %d\n", melhor);
    return melhor;
}

int piorPontuacao(int *pontos, int MAX)
{
    int pior = pontos[0];

    for (int i = 0; i < MAX; i++)
    {
        if (pontos[i] < pior)
        {
            pior = pontos[i];
        }
    }

    printf("A pior pontuação obtida pelo atleta é: %d\n", pior);
    return pior;
}

void acMed(int *pontos, int MAX, float media)
{
    int qtd_acima = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (pontos[i] > media)
        {
            qtd_acima++;
        }
    }

    float porc_acima = (qtd_acima * 100.0) / MAX;

    printf("A porcentagem de pontuações acima da média é de: %.2f%%\n", porc_acima);
}

void abMed(int *pontos, int MAX, float media)
{
    int qtd_abaixo = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (pontos[i] < media)
        {
            qtd_abaixo++;
        }
    }

    float porc_abaixo = (qtd_abaixo * 100.0) / MAX;

    printf("A porcentagem de pontuações abaixo da média é de: %.2f%%\n", porc_abaixo);
}

void qtdJuMel(int *pontos, int MAX, int melhor)
{
    int qtd_melhor = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (pontos[i] == melhor)
        {
            qtd_melhor++;
        }
    }

    printf("A quantidade de juízes que atribuíram a melhor nota ao atleta é: %d\n", qtd_melhor);
}

void qtdJuPi(int *pontos, int MAX, int pior)
{
    int qtd_pior = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (pontos[i] == pior)
        {
            qtd_pior++;
        }
    }

    printf("A quantidade de juízes que atribuíram a pior nota ao atleta é: %d\n", qtd_pior);
}

