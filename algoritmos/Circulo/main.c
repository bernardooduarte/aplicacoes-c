#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularAreaCirculo(float raio);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio;
    printf("Insira o raio do círculo: ");
    scanf("%f", &raio);

    float resultado = calcularAreaCirculo(raio);

    printf("\nA = %.4f\n\n", resultado);

    system("pause");

    return 0;
}

float calcularAreaCirculo(float raio)
{

    float pi = 3.14159;

    float formula = pi * (raio * raio);

    return formula;

}
