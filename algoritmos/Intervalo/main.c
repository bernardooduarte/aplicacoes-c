#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularQtdIn(int MAX, int numeros[MAX]);
int calcularQtdOut(int MAX, int numeros[MAX]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int MAX;
    printf("Insira a quantidade de números inteiros para a leitura: ");
    scanf("%d", &MAX);

    int numeros[MAX];
    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("Insira o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n%d in\n", calcularQtdIn(MAX, numeros));
    printf("%d out\n\n", calcularQtdOut(MAX, numeros));

    system("pause");
    return 0;
}

int calcularQtdIn(int MAX, int numeros[MAX])
{

    int i;
    int qtdin = 0;

    for(i = 0; i < MAX; i++)
    {
        if(numeros[i] >= 10 && numeros[i] <= 20)
        {
            qtdin++;
        }
    }

    return qtdin;
}

int calcularQtdOut(int MAX, int numeros[MAX])
{

    int i;
    int qtdout = 0;

    for(i = 0; i < MAX; i++)
    {
        if(numeros[i] < 10 || numeros[i] > 20)
        {
            qtdout++;
        }
    }

    return qtdout;
}
