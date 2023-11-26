#include <stdio.h>
#include <locale.h>

struct estrutura {
    int temp;
    int cont;
};

typedef struct estrutura Dados;

void contTemp(Dados dados);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    printf("Insira a temperatura em graus: ");
    scanf("%d", &dados.temp);

    contTemp(dados);

    return 0;
}

void contTemp(Dados dados) {
    dados.cont = 0;

    if (dados.temp > 0) {
        while (dados.cont < dados.temp) {
            printf("+");
            dados.cont++;
        }
    } else {
        while (dados.cont > dados.temp) {
            printf("-");
            dados.cont--;
        }
    }
}
