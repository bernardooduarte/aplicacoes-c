#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valor1, valor2, soma, subtracao, multiplicacao, divisao;

    printf("Insira o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Insira o segundo valor: ");
    scanf("%f", &valor2);

    soma = valor1 + valor2;
    subtracao = valor1 - valor2;
    multiplicacao = valor1 * valor2;
    divisao = valor1 / valor2;

    printf("A soma dos valores da %.2f", soma);
    sleep(2);

    printf("\nA subtracao dos valores da %.2f", subtracao);
    sleep(2);

    printf("\nA multiplicacao dos valores da %.2f", multiplicacao);
    sleep(2);

    printf("\nA divisao dos valores da %.2f", divisao);

    printf("\nFim\n");

    system("pause");

    return 0;

}
