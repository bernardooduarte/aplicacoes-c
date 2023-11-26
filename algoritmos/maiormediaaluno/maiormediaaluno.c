#include <stdio.h>
#include <locale.h>

float calcularMedia(int MAX, float notas[MAX]);
int calcularAlunosAprovados(float media, int MAX, float notas[MAX]);

int main() {

    setlocale(LC_ALL, "Portuguese");

    int MAX;
    printf("Insira a quantidade de alunos da turma: ");
    scanf("%d", &MAX);

    float notas[MAX];
    int i;

    for (i = 0; i < MAX; i++) {
        printf("Insira a nota do %dº aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float imprimirMedia = calcularMedia(MAX, notas);
    printf("Média da turma: %.1f\n", imprimirMedia);

    int imprimirQtdAprovados = calcularAlunosAprovados(imprimirMedia, MAX, notas);
    printf("A quantidade de alunos aprovados é: %d\n", imprimirQtdAprovados);

    system("pause");
    return 0;
}

float calcularMedia(int MAX, float notas[MAX]) {
    float somarnotas = 0;

    for (int i = 0; i < MAX; i++) {
        somarnotas += notas[i];
    }

    float media = somarnotas / MAX;
    return media;
}

int calcularAlunosAprovados(float media, int MAX, float notas[MAX]) {
    int qtdaprov = 0;

    for (int i = 0; i < MAX; i++) {
        if (notas[i] >= media) {
            qtdaprov++;
        }
    }

    return qtdaprov;
}
