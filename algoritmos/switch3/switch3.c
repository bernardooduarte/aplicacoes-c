#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char simbolo;
    int pnumero, snumero, adicao, subtracao, divisao, multiplicacao;

    printf("\nQual opera��o voc� deseja fazer (+, -, /, *)? ");
    scanf("%c", &simbolo);

    printf("Insira o primeiro n�mero: ");
    scanf("%d", &pnumero);

    printf("Insira o segundo n�mero: ");
    scanf("%d", &snumero);

    adicao = pnumero + snumero;
    subtracao = pnumero - snumero;
    divisao = pnumero / snumero;
    multiplicacao = pnumero * snumero;

    switch(simbolo)
    {
    case '+':
        printf("O resultado �: %d\n", adicao);
        break;
    case '-':
        printf("O resultado �: %d\n", subtracao);
        break;
    case '/':
        printf("O resultado �: %d\n", divisao);
        break;
    case '*':
        printf("O resultado �: %d\n", multiplicacao);
        break;
    default:
        printf("S�mbolo de opera��o inv�lida\n");
        break;
    }

    printf("Pressione qualquer tecla para sair...");
    getchar(); // aguarda por um caractere
    return 0;
}

