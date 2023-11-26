#include <stdio.h>
#include <locale.h>

int pesquisarNumero(int MAX, int NUM, int numeros[MAX]);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int MAX;

    printf("Insira a quantidade de n�meros inteiros: ");
    scanf("%d", &MAX);



    int i;

    int numeros[MAX];

    for(i = 0; i < MAX; i++)
    {
        printf("Insira o %d� n�mero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

     int NUM;

    printf("\nInsira o n�mero a ser pesquisado: ");
    scanf("%d", &NUM);

    int resultado = pesquisarNumero(MAX, NUM, numeros);

    printf("\nA quantidade de vezes que o n�mero %d ocorre no vetor �: %d\n\n", NUM, resultado);

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
