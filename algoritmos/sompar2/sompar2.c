#include <stdio.h>
#include <locale.h>

struct estrutura
{

    int num;
    int contador;
    int formula;
};

typedef struct estrutura Dados;

int somPar(Dados dados);

main()
{

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    printf("Insira o número inteiro positivo: ");
    scanf("%d", &dados.num);

    somPar(dados);

    system("pause");

    return 0;

}

int somPar(Dados dados)
{

    if(dados.num < 0)
    {
        printf("Número inteiro positivo inválido\n");
    }

    else
    {
        dados.contador = 1;
        dados.formula = 0;

        while(dados.contador <= dados.num)
        {
            if(dados.num % dados.contador == 0)
            {
                dados.formula += dados.contador;
            }
            dados.contador++;
        }
    }
    return dados.formula;
}
