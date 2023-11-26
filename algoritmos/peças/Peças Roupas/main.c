#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularPreco(int qtdA, float valorA, int qtdB, float valorB);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idA, qtdA;
    float valorA;
    printf("Insira a identificação, a quantidade e o valor da primeira peça: ");
    scanf("%d %d %f", &idA, &qtdA, &valorA);

    int idB, qtdB;
    float valorB;
    printf("Insira a identificação, a quantidade e o valor da primeira peça: ");
    scanf("%d %d %f", &idB, &qtdB, &valorB);

    float resultado = calcularPreco(qtdA, valorA, qtdB, valorB);

    printf("\nVALOR A PAGAR: R$ %.2f\n\n", resultado);

    system("pause");

    return 0;
}

float calcularPreco(int qtdA, float valorA, int qtdB, float valorB)
{

    float soma = (valorA * qtdA) + (valorB * qtdB);

    return soma;

}
