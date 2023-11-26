#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
    /* Vers�o 1: Fun��o sem retorno e sem par�metros*/

    setlocale(LC_ALL, "Portuguese");
    calculaPotencia1();

    /* Vers�o 2: Fun��o sem retorno e com par�metros*/

    int base, expoente;

    printf("\n\nExecutando vers�o 2");

    printf("\nBase: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expoente);
    calculaPotencia2(base, expoente);

    /* Vers�o 3: com retorno e com par�metro*/

    printf("\n\nExecutando vers�o 3");

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

    printf("Executando vers�o 1");
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
