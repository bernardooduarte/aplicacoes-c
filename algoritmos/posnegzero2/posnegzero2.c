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

    printf("Insira o n�mero: ");
    if (scanf("%d", &dados.num) != 1) {
        printf("Entrada inv�lida. Certifique-se de inserir um n�mero inteiro.\n");
        system("pause");
        return 1;  // Encerra o programa com c�digo de erro
    }

    posnegZero(dados);

    system("pause");

    return 0;
}

void posnegZero(Dados dados) {
    if (dados.num > 0) {
        printf("� positivo!\n");
    } else if (dados.num < 0) {
        printf("� negativo!\n");
    } else {
        printf("� zero!\n");
    }
}
