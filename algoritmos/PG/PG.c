#include <stdio.h>

struct estrutura {
    int ptermo;
    int razao;
    int ntermos;
};

typedef struct estrutura Dados;

int calculoPG(Dados dados);

int main() {
    Dados dados;

    printf("Insira o primeiro termo da PG: ");
    scanf("%d", &dados.ptermo);

    printf("Insira a razão da PG: ");
    scanf("%d", &dados.razao);

    printf("Insira o número de termos que deseja somar da PG: ");
    scanf("%d", &dados.ntermos);

    int soma = calculoPG(dados);

    printf("A soma dos %d primeiros termos da PG é: %d\n", dados.ntermos, soma);

    return 0;
}

int calculoPG(Dados dados) {
    int contador;
    int termo = dados.ptermo;
    int soma = 0;

    for (contador = 0; contador < dados.ntermos; contador++) {
        soma += termo;
        termo *= dados.razao;
    }

    return soma;
}
