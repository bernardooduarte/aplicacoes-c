#include <stdio.h>
#include <locale.h>
#include <conio.h>

struct estrutura
{

    char nome[50];
    float nota;
};

typedef struct estrutura Dados;

void aprovadoReprovado(Dados dados);

main()
{

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    aprovadoReprovado(dados);

    system("pause");

    return 0;

}

void aprovadoReprovado(Dados dados)
{
    char continua = 'S';

    while(continua == 'S' || continua == 's')
    {
        printf("Insira o nome do aluno: ");
        scanf("%s", &dados.nome);

        printf("Insira a nota do aluno: ");
        scanf("%f", &dados.nota);

          if(dados.nota >= 7.0){
            printf("Aluno aprovado!\n");
        } else{
            printf("Aluno reprovado!\n");
        }

        printf("\nDeseja continuar [S/N]?");
        continua = getche();
        printf("\n\n");
    }

}
