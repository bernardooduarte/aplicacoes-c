#include <stdio.h>
#include <locale.h>

float medNum();

int main() {
    setlocale(LC_ALL, ""); // Define a localiza��o para permitir acentos

    float media = medNum();
    printf("A m�dia dos n�meros positivos �: %.2f\n", media);

    return 0;
}

float medNum() {
    float soma = 0.0, num;
    int qtd = 0;

    printf("Insira o n�mero: ");
    scanf("%f", &num);

    while (num >= 0) {
        soma += num;
        qtd++;

        printf("Insira o n�mero: ");
        scanf("%f", &num);
    }

    if (qtd > 0) {
        return soma / qtd;
    } else {
        return 0.0; // Retorna 0 se nenhum n�mero positivo for inserido
    }
}
