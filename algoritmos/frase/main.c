#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int i, ultimaPosicao;
    char frase[20];

    printf("Informe uma frase: ");
    gets(frase);

    ultimaPosicao = strlen(frase) - 1;

    for(i = ultimaPosicao; i >= 0; i--)
    {
        printf("%c", frase[i]);

    }

    printf("\nQuantidade de caracteres digitados: %d", strlen(frase));



    return 0;
}
