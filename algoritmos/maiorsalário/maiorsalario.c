#include <stdio.h>
#include <locale.h>

float calcularMaiorSalario(int MAX, float salarios[MAX]);

int main() {

    setlocale(LC_ALL, "Portuguese");

    int MAX;
    printf("Insira a quantidade de funcionários da sua empresa: ");
    scanf("%d", &MAX);

    float salarios[MAX];

    for (int i = 0; i < MAX; i++) {
        printf("Insira o salário do %dº funcionário: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    float resultado = calcularMaiorSalario(MAX, salarios);

    printf("\nO maior salário é: %.2f\n", resultado);

    system("pause");

    return 0;
}

float calcularMaiorSalario(int MAX, float salarios[MAX]) {
    float maiorsalario = 0;

    for (int i = 0; i < MAX; i++) {
        if (salarios[i] > maiorsalario) {
            maiorsalario = salarios[i];
        }
    }

    return maiorsalario;
}
