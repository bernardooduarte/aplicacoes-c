#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
    /* Versão 1: Função sem retorno e sem parâmetros*/

    setlocale(LC_ALL, "Portuguese");
    calculaPotencia1();

    /* Versão 2: Função sem retorno e com parâmetros*/

    int base, expoente;

    printf("\n\nExecutando versão 2");

    printf("\nBase: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expoente);
    calculaPotencia2(base, expoente);

    /* Versão 3: com retorno e com parâmetro*/

    printf("\n\nExecutando versão 3");

    printf("\nBase: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expoente);

    printf("Resultado: %d", calculaPotencia3(base, expoente));

    return 0;


}
void calculaPotencia1()
{
    int base, expoente, resultado=1, i;

    printf("Executando versão 1");
    printf("\nBase: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expoente);

    for(i=1 ; i<=expoente; i++)
    {
        resultado = resultado * base;
    }

    printf("Resultado: %d", resultado);

}

void calculaPotencia2(int base, int expoente)
{
    int i, resultado=1;

    for(i=1 ; i<=expoente; i++)
    {
        resultado = resultado * base;
    }

    printf("Resultado: %d", resultado);

}

int calculaPotencia3(int base, int expoente)

{
    int i, resultado;

    resultado=1;

    for(i=1 ; i<=expoente; i++)
    {
        resultado = resultado * base;
    }

    return resultado;
}
