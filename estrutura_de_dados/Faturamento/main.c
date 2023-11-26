#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculaFaturamento(int MAX, float *vendas);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int MAX;

    printf("Insira a quantidade de vendas: ");
    scanf("%d", &MAX);

    float *vendas = malloc(sizeof(float) * MAX);

    for(int i = 0; i < MAX; i++)
    {
        printf("Insira o valor da %dª venda: ", i+1);
        scanf("%f", vendas+i);
    }

    printf("\nFaturamento total: %.2f\n", calculaFaturamento(MAX, vendas));

    system("pause");

    return 0;
}

float calculaFaturamento(int MAX, float *vendas)
{

    float total = 0;

    for(int i = 0; i < MAX; i++)
    {
        total+=*(vendas+i);
    }

    return total;
}
