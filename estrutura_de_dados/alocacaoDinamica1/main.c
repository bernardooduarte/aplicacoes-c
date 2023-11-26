#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{

    setlocale(LC_ALL, "Portuguese");

    int numero = 10;
    int *pNumero = &numero;


    printf("\nConteúdo de numero: %d", numero);
    printf("\nEndereço de numero: %d", &numero);
    printf("\nConteúdo de pNumero: %d", pNumero);
    printf("\nConteúdo que pNumero aponta: %d", *pNumero);
}
