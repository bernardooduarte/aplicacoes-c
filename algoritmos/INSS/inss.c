#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float inss, dias, formulabruta, formulaliquida, horaspd, valorph;

    printf("Bem-vindo a calculadora de salário");
    sleep(2);

    printf("\n.");
    sleep(1);

    printf("\n.");
    sleep(1);

    printf("\n.");
    sleep(1);

    printf("\nInsira a quantidade de dias do mês:");
    scanf("%f", &dias);

    printf("Insira a quantidade de horas trabalhadas em um dia:");
    scanf("%f", &horaspd);

    printf("Insira o valor pago por hora:");
    scanf("%f", &valorph);

    printf("Insira o percentual de desconto do INSS:");
    scanf("%f", &inss);

    formulabruta = (horaspd * valorph)*dias;
    formulaliquida = formulabruta - (inss/100) * (horaspd * valorph)*dias;

    printf("Calculando");
    sleep(3);

    printf("\n.");
    sleep(1);

    printf("\n.");
    sleep(1);

    printf("\n.");
    sleep(1);

    printf("\nO salário bruto é de %.2f", formulabruta);
    printf("\nO salário líquido é de %.2f", formulaliquida);

    return 0;

}
