#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{

    setlocale(LC_ALL, "Portuguese");

    int numero = 10;
    int *pNumero = &numero;


    printf("\nConte�do de numero: %d", numero);
    printf("\nEndere�o de numero: %d", &numero);
    printf("\nConte�do de pNumero: %d", pNumero);
    printf("\nConte�do que pNumero aponta: %d", *pNumero);
}
