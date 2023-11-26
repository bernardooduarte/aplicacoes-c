#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float numero;

    printf("Insira o número:");
    scanf("%f", &numero);

    if (numero > 0.0)
    {

        printf("O número é positivo\n");
    }
    else
    {
        printf("O número é negativo\n");

    }

    system("pause");
    return 0;




}
