#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float num1, num2, som, sub, mult, div;

    printf("Insira o primeiro número real: ");
    scanf( "%f", &num1);

    printf("Insira o segundo número real: ");
    scanf( "%f", &num2);

    som = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("\nA soma dos números é: %.2f\n", som);
    printf("A subtração dos números é: %.2f\n", sub);
    printf("A multiplicação dos números é: %.2f\n", mult);
    printf("A divisão dos números é: %.2f\n", div);

    system("pause");
    return 0;

}
