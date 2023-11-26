#include <stdio.h>
#include <locale.h>
#include <conio.h>

struct estrutura
{

    int num;
    int contador;
    int resposta;
    int pontuacao;
};

typedef struct estrutura Dados;

void tabuada(Dados dados);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    tabuada(dados);

    return 0;

}

void tabuada(Dados dados)
{

    char continua = 'S';

    while(continua == 'S' || continua == 's')
    {

        printf("Insira um número de 1 a 10: ");
        scanf("%d", &dados.num);

        dados.contador = 1;

        while(dados.contador <= 10)
        {
            printf("%d * %d: ", dados.num, dados.contador);
            scanf("%d", &dados.resposta);

            if(dados.resposta == dados.num * dados.contador)
            {
                dados.pontuacao++;
            }
            dados.contador++;
        }

        if(dados.pontuacao == 10)
        {
            printf("Excelente!\n");
        }
        else if (dados.pontuacao == 9)
        {
            printf("Estude mais um pouquinho\n");
        }
        else if(dados.pontuacao == 8)
        {
            printf("Estude mais\n");
        }
        else
        {
            printf("Estude muito mais\n");

        }

        printf("\nDeseja continuar? ");
        continua = getche();
        printf("\n\n");
    }


}
