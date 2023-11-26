#include <stdio.h>
#include <locale.h>
#define MAX 7

int calcularMenorValor(int valores[MAX]);
int calcularPosicao(int menorValor, int valores[MAX]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valores[MAX];
    int i;

    for (i = 0; i < MAX; i++)
    {
        printf("Insira o %d° número: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int menorValor = calcularMenorValor(valores);
    int posicao = calcularPosicao(menorValor, valores);

    printf("\nO menor valor é: %d e a sua posição é: %d\n\n", menorValor, posicao);

    system("pause");

    return 0;
}

int calcularMenorValor(int valores[MAX])
{
    int menorValor = valores[0];
    int i;

    for (i = 1; i < MAX; i++)
    {
        if (valores[i] < menorValor)
        {
            menorValor = valores[i];
        }
    }

    return menorValor;
}

int calcularPosicao(int menorValor, int valores[MAX])
{
    int i;

    for (i = 0; i < MAX; i++)
    {
        if (valores[i] == menorValor)
        {
            return i;
        }
    }
    return -1;
}
