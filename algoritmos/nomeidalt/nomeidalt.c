#include <stdio.h>

struct estrutura {
    char nome[100];
    int idade;
    float altura;
};

typedef struct estrutura Ficha;

void nomidAlt(Ficha ficha);

int main() {
    Ficha ficha;

    printf("Insira o nome: ");
    scanf("%s", ficha.nome);

    printf("Insira a idade: ");
    scanf("%d", &ficha.idade);

    printf("Insira a altura: ");
    scanf("%f", &ficha.altura);

    nomidAlt(ficha);

    return 0;
}

void nomidAlt(Ficha ficha) {
    printf("\nNome: %s\n", ficha.nome);
    printf("Idade: %d\n", ficha.idade);
    printf("Altura: %.2f\n", ficha.altura);
}
