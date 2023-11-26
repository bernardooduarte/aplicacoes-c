#include <stdio.h>

// Estrutura para armazenar os dados de cada habitante
struct Habitante {
    char sexo;
    int idade;
};

// Função para contar a quantidade de mulheres entre 18 e 35 anos
int contarMulheresEntre18e35(struct Habitante habitantes[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (habitantes[i].sexo == 'F' && habitantes[i].idade >= 18 && habitantes[i].idade <= 35) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int quantidadeHabitantes;
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &quantidadeHabitantes);

    struct Habitante populacao[quantidadeHabitantes];
    for (int i = 0; i < quantidadeHabitantes; i++) {
        printf("Digite o sexo do habitante (M/F): ");
        scanf(" %c", &populacao[i].sexo);
        printf("Digite a idade do habitante: ");
        scanf("%d", &populacao[i].idade);
    }

    int quantidadeMulheres = contarMulheresEntre18e35(populacao, quantidadeHabitantes);

    printf("Quantidade de mulheres entre 18 e 35 anos: %d\n", quantidadeMulheres);

    return 0;
}
