#include <stdio.h>
#include <locale.h>

void calcularFaturamento(float *vendas, int MAX);

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

    calcularFaturamento(vendas, MAX);

    return 0;
}

void calcularFaturamento(float *vendas, int MAX)
{

    float soma = 0;

    for(int i = 0; i < MAX; i++)
    {
        soma+=*(vendas+i);
    }

    printf("O faturamento total é: %.2f", soma);
}
