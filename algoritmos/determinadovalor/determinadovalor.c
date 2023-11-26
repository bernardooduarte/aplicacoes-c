#include <stdio.h>
#include <locale.h>

int pesquisarNumero(int MAX, int NUM, int numeros[MAX]);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int MAX;

    printf("Insira a quantidade de números inteiros: ");
    scanf("%d", &MAX);



    int i;

    int numeros[MAX];

    for(i = 0; i < MAX; i++)
    {
        printf("Insira o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

     int NUM;

    printf("\nInsira o número a ser pesquisado: ");
    scanf("%d", &NUM);

    int resultado = pesquisarNumero(MAX, NUM, numeros);

    printf("\nA quantidade de vezes que o número %d ocorre no vetor é: %d\n\n", NUM, resultado);

    system("pause");

    return 0;

}

int pesquisarNumero(int MAX, int NUM, int numeros[MAX])
{

    int i;
    int qtdvezes = 0;

    for(i = 0; i < MAX; i++)
    {
        if(numeros[i] == NUM)
        {
            qtdvezes++;
        }
    }
    return qtdvezes;
}
