#include <stdio.h>
#include <locale.h>
#define MAX 8

float calcularMediaPares(int valores[MAX]);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int valores[MAX];

    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("Insira o %d° valor: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nA média aritmética dos valores pares é: %.1f\n\n", calcularMediaPares(valores));

    system("pause");

    return 0;
}

float calcularMediaPares(int valores[MAX])
{
    int somarPares = 0;
    int qtdpares = 0;
    int i;

    for(i = 0; i < MAX; i++)
    {
        if (valores[i] % 2 == 0)
        {
            somarPares += valores[i];
            qtdpares++;
        }
    }


    float media;

    media = somarPares / qtdpares;

    return media;
}
