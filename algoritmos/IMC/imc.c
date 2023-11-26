#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    float altura, peso, imc;

    printf("Bem-vindo � calculadora de IMC!");
    sleep(2);

    printf("\nInsira a altura em metros:");
    scanf("%f", &altura);

    printf("Insira o peso em kg:");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("O IMC �: %.2f\n", imc);

    if (imc < 18.50) {
        printf("Classifica��o: Magreza\n");
    } else if (imc < 25.00) {
        printf("Classifica��o: Normal\n");
    } else if (imc < 30.00) {
        printf("Classifica��o: Sobrepeso\n");
    } else if (imc < 35.00) {
        printf("Classifica��o: Obesidade Grau I\n");
    } else if (imc < 40.00) {
        printf("Classifica��o: Obesidade Grau II\n");
    } else {
        printf("Classifica��o: Obesidade Grau III\n");
    }

    system("pause");
    return 0;
}
