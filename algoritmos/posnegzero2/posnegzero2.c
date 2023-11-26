#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct estrutura {
    int num;
};

typedef struct estrutura Dados;

void posnegZero(Dados dados);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    printf("Insira o número: ");
    if (scanf("%d", &dados.num) != 1) {
        printf("Entrada inválida. Certifique-se de inserir um número inteiro.\n");
        system("pause");
        return 1;  // Encerra o programa com código de erro
    }

    posnegZero(dados);

    system("pause");

    return 0;
}

void posnegZero(Dados dados) {
    if (dados.num > 0) {
        printf("É positivo!\n");
    } else if (dados.num < 0) {
        printf("É negativo!\n");
    } else {
        printf("É zero!\n");
    }
}
