#include <stdio.h>
#include <locale.h>

float medNum();

int main() {
    setlocale(LC_ALL, ""); // Define a localização para permitir acentos

    float media = medNum();
    printf("A média dos números positivos é: %.2f\n", media);

    return 0;
}

float medNum() {
    float soma = 0.0, num;
    int qtd = 0;

    printf("Insira o número: ");
    scanf("%f", &num);

    while (num >= 0) {
        soma += num;
        qtd++;

        printf("Insira o número: ");
        scanf("%f", &num);
    }

    if (qtd > 0) {
        return soma / qtd;
    } else {
        return 0.0; // Retorna 0 se nenhum número positivo for inserido
    }
}
