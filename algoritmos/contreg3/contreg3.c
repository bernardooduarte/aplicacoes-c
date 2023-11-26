#include <stdio.h>
#include <locale.h>

struct estrutura
{

    int num;
    int contador;

};


typedef struct estrutura Dados;

void contReg(Dados dados);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    printf("Insira o número: ");
    scanf("%d", &dados.num);

    contReg(dados);

    system("pause");
    return 0;


}

void contReg(Dados dados)
{

    if(dados.num < 0)
    {
        printf("Número inteiro positivo inválido\n");
    }

    dados.contador = 0;

    while(dados.contador <= dados.num)
    {
        printf("%d ", dados.contador);
        dados.contador++;
    }

    printf("\n");


}


