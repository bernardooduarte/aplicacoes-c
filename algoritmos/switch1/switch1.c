#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite o n�mero: ");
    scanf("%d", &numero);

    switch(numero)
    {

    case 1:
        printf("Domingo\n");
        break;

    case 2:
        printf("Segunda-feira\n");
        break;

    case 3:
        printf("Ter�a-feira\n");
        break;

    case 4:
        printf("Quarta-feira\n");
        break;

    case 5:
        printf("Quinta-feira\n");
        break;

    case 6:
        printf("Sexta-feira\n");
        break;

    case 7:
        printf("S�bado\n");
        break;

    default:
        printf("Dia da semana inv�lido\n");

    }

    system("pause");
    return 0;




}
