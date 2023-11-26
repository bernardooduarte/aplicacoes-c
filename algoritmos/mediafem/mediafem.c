#include <stdio.h>
#include <locale.h>

struct estrutura {
    char nome[100];
    int idade;
    char sexo;
    int contadorfem;
    int contadormasc;
    float mediafem;
};

typedef struct estrutura Dados;

void pedirDados(Dados *dados);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    pedirDados(&dados);

    return 0;
}

void pedirDados(Dados *dados) {
    int numPessoas = 0;
    int somaIdades = 0;

    printf("Quantas pessoas deseja inserir? ");
    scanf("%d", &numPessoas);

    for (int i = 0; i < numPessoas; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Insira o nome: ");
        scanf(" %s", dados->nome);

        printf("Insira o sexo (F/M): ");
        scanf(" %c", &dados->sexo);

        printf("Insira a idade: ");
        scanf("%d", &dados->idade);

        if (dados->sexo == 'F') {
            dados->contadorfem++;
            somaIdades += dados->idade;
        } else {
            dados->contadormasc++;
        }

        printf("\n");
    }

    if (dados->contadorfem > 0) {
        dados->mediafem = (float)somaIdades / dados->contadorfem;
        printf("Média das idades das mulheres: %.2f\n", dados->mediafem);
    } else {
        printf("Nenhuma mulher foi inserida.\n");
    }
}
