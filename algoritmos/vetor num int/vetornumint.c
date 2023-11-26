#include <stdio.h>
#include <locale.h>

float calcularMedia(int MAX, float notas[MAX]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int MAX;

    printf("Insira a quantidade de números inteiros para calcular a média: ");
    scanf("%d", &MAX);

    int i;
    float notas[MAX];

    for(i = 0; i < MAX; i++)
    {
        printf("Insira o %dº número inteiro: ", i+1);
        scanf("%f", &notas[i]);
    }

    float resultado = calcularMedia(MAX, notas);

    printf("\nA média é: %.1f\n\n", resultado);

    system("pause");

    return 0;

}

float calcularMedia(int MAX, float notas[MAX])
{
    float media = 0;
    int i;
    for(i = 0; i < MAX; i++)
    {
        media += notas[i];
    }

    return media / MAX;
}
