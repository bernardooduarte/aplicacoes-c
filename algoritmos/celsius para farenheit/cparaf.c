#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float c, f;

    printf("Bem-vindo ao conversor de Celsius para Fahrenheit");
    sleep(2);

    printf("\nInsira o valor em Celsius: ");
    scanf("%f", &c);

    printf("Calculando...");
    sleep(3);

    f = (9/5)*c + 32;

    printf("\nO valor em Fahrenheit e %.2f", f);

    system("pause");

    return 0;

}
