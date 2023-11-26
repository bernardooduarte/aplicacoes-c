#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float prova1, prova2, prova3, faltas, media;

    printf("Bem-vindo à calculadora de aprovação/reprovação!\n");

    printf("\nInsira a nota da primeira prova: ");
    scanf("%f", &prova1);

    printf("Insira a nota da segunda prova: ");
    scanf("%f", &prova2);

    printf("Insira a nota da terceira prova: ");
    scanf("%f", &prova3);

    printf("Agora insira a quantidade de faltas: ");
    scanf("%f", &faltas);

    media = (prova1 + prova2 + prova3) / 3;

    printf("\nCalculando...\n");
    sleep(3);

    printf("\nMédia: %.2f\nFaltas: %.2f%%\n", media, faltas / 72 * 100);

    if (media >= 60 && faltas <= 0.25 * 72) {
        printf("\nAprovado!\n");
    } else {
        printf("\nReprovado!\n");
    }

    system("pause");
    return 0;
}
