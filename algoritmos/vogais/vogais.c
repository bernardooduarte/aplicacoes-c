#include <stdio.h>

#define MAX 30

int contaVogais(char frase[MAX], char vogaisEncontradas[MAX]);

int main()
{
    char frase[MAX];
    printf("Informe uma frase: ");
    gets(frase);

    char vogais[MAX];
    int quantidadeVogais = contaVogais(frase, vogais);

    printf("Quantidade de vogais na frase: %d\n", quantidadeVogais);
    printf("Vogais encontradas: ");
    for (int i = 0; i < quantidadeVogais; i++)
    {
        printf("%c ", vogais[i]);
    }
    printf("\n");

    return 0;
}

int contaVogais(char frase[MAX], char vogaisEncontradas[MAX])
{
    int vogais = 0;
    int i;

    for (i = 0; i < MAX && frase[i] != '\0'; i++)
    {
        switch (frase[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogaisEncontradas[vogais] = frase[i];
                vogais++;
                break;
        }
    }

    return vogais;
}
