#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    float altura, peso, imc;

    printf("Bem-vindo à calculadora de IMC!");
    sleep(2);

    printf("\nInsira a altura em metros:");
    scanf("%f", &altura);

    printf("Insira o peso em kg:");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("O IMC é: %.2f\n", imc);

    if (imc < 18.50) {
        printf("Classificação: Magreza\n");
    } else if (imc < 25.00) {
        printf("Classificação: Normal\n");
    } else if (imc < 30.00) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc < 35.00) {
        printf("Classificação: Obesidade Grau I\n");
    } else if (imc < 40.00) {
        printf("Classificação: Obesidade Grau II\n");
    } else {
        printf("Classificação: Obesidade Grau III\n");
    }

    system("pause");
    return 0;
}
