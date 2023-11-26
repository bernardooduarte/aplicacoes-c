#include <stdio.h>
#include <locale.h>

struct estrutura {
    int num;
    int contador;
    int media;
    char continua;
};

typedef struct estrutura Dados;

float mediaCont(Dados *dados);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Dados dados;
    dados.contador = 0;
    dados.media = 0;
    dados.continua = 'S';

    float media = mediaCont(&dados);
    printf("A média é: %.2f\n", media);

    return 0;
}

float mediaCont(Dados *dados) {
    while (dados->continua == 'S' || dados->continua == 's') {
        printf("Insira um número inteiro: ");
        scanf("%d", &(dados->num));
        dados->contador++;

        printf("Digite S ou s para continuar: ");
        scanf(" %c", &(dados->continua));

        dados->media = dados->media + dados->num;
    }

    if (dados->contador != 0) {
        dados->media = dados->media / dados->contador;
    }

    return dados->media;
}
