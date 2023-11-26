#include <stdio.h>
#include <locale.h>
#define MAX 6

void inverterVetor(int valores[MAX]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valores[MAX];
    int i;

    for (i = 0; i < MAX; i++)
    {
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &valores[i]);
    }

    inverterVetor(valores);

    printf("\nVetor invertido:");

    for (i = 0; i < MAX; i++)
    {
        printf(" %d", valores[i]);
    }

    printf("\n\n");

    system("pause");

    return 0;
}

void inverterVetor(int valores[MAX])
{
    int i;
    int temp;

    for (i = 0; i < MAX / 2; i++)
    {
        temp = valores[i];
        valores[i] = valores[MAX - i - 1];
        valores[MAX - i - 1] = temp;
    }
}

