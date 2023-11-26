#include <stdio.h>
#include <locale.h>

int calcularMaiorValor(int MAX, int numeros[MAX]);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int MAX;

    printf("Insira a quantidade de n�meros inteiros: ");
    scanf("%d", &MAX);

    if(MAX <= 0)
    {
        printf("\nErro, quantidade menor ou igual a zero!\n");
        system("pause");
        return 0;
    }

    int numeros[MAX];
    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("Insira o %d� n�mero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int resultado = calcularMaiorValor(MAX, numeros);

    printf("\nO maior valor �: %d\n\n", resultado);

    system("pause");
    return 0;

}

int calcularMaiorValor(int MAX, int numeros[MAX])
{

    int maiornum = 0;
    int i;
    for(i = 0; i < MAX; i++)
    {
        if(numeros[i] > maiornum)
        {
            maiornum = numeros[i];
        }

    }

    return maiornum;
}
