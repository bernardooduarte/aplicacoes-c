#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Informe a 1a. nota:");
    scanf("%f", &nota1);

    printf("Informe a 2a. nota:");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}
