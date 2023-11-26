#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char simbolo;
    int pnumero, snumero, adicao, subtracao, divisao, multiplicacao;

    printf("\nQual operação você deseja fazer (+, -, /, *)? ");
    scanf("%c", &simbolo);

    printf("Insira o primeiro número: ");
    scanf("%d", &pnumero);

    printf("Insira o segundo número: ");
    scanf("%d", &snumero);

    adicao = pnumero + snumero;
    subtracao = pnumero - snumero;
    divisao = pnumero / snumero;
    multiplicacao = pnumero * snumero;

    switch(simbolo)
    {
    case '+':
        printf("O resultado é: %d\n", adicao);
        break;
    case '-':
        printf("O resultado é: %d\n", subtracao);
        break;
    case '/':
        printf("O resultado é: %d\n", divisao);
        break;
    case '*':
        printf("O resultado é: %d\n", multiplicacao);
        break;
    default:
        printf("Símbolo de operação inválida\n");
        break;
    }

    printf("Pressione qualquer tecla para sair...");
    getchar(); // aguarda por um caractere
    return 0;
}

