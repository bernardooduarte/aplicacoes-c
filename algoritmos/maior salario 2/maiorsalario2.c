#include <stdio.h>
#include <locale.h>

float calcularMaiorSalario(int MAX, float salarios[MAX]);
int identificarFuncionario(int MAX, float salarios[MAX], float maiorsalario);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int MAX;

    printf("Insira a quantidade de funcion�rios: ");
    scanf("%d", &MAX);

    float salarios[MAX];
    int i;

    for (i = 0; i < MAX; i++) {
        printf("Insira o sal�rio do %d� funcion�rio: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    float resultado = calcularMaiorSalario(MAX, salarios);
    int funcionariomaiorsalario = identificarFuncionario(MAX, salarios, resultado);

    printf("\n\nO maior sal�rio �: %.2f\n", resultado);
    printf("Funcion�rio %d\n\n", funcionariomaiorsalario);

    system("pause");

    return 0;
}

float calcularMaiorSalario(int MAX, float salarios[MAX]) {
    float maiorsalario = 0.0;
    int i;

    for (i = 0; i < MAX; i++) {
        if (salarios[i] > maiorsalario) {
            maiorsalario = salarios[i];
        }
    }

    return maiorsalario;
}

int identificarFuncionario(int MAX, float salarios[MAX], float maiorsalario) {
    int indicesalario = 0;
    int i;

    for (i = 0; i < MAX; i++) {
        if (salarios[i] == maiorsalario) {
            indicesalario = i + 1;
        }
    }
    return indicesalario;
}
