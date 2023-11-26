#include <stdio.h>
#include <locale.h>

struct estrutura
{

    char carac;
    int qtd;
    int contador;

};

typedef struct estrutura Dados;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    printf("Insira o caractere: ");
    scanf("%c", &dados.carac);

    printf("Insira a quantidade de vezes para ser impressa: ");
    scanf("%d", &dados.qtd);

    impCarac(dados);

    system("pause");

    return 0;

}

void impCarac(Dados dados)
{

    dados.contador = 1;

    while(dados.contador <= dados.qtd)
    {
        printf("%c ", dados.carac);
        dados.contador++;
    }
    printf("\n");
}
