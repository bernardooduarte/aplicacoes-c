#include <stdio.h>
#include <locale.h>
#include <conio.h>

struct estrutura
{

    int num;


};

typedef struct estrutura Dados;

void parImp(Dados dados);

main()
{

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    parImp(dados);

    system("pause");

    return 0;
}

void parImp(Dados dados)
{

    int continua = 'S';

    while(continua == 'S' || continua == 's')
    {
        printf("Insira o número: ");
        scanf("%d", &dados.num);

        if(dados.num % 2 == 0)
        {
            printf("É par\n");
        }
        else
        {
            printf("É ímpar\n");
        }

        printf("Deseja continuar [S/N]? ");
        continua = getche();
        printf("\n\n");
    }
}
