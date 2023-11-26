#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct TipoPilha
{
    int info;
    struct TipoPilha *prox;
};

typedef struct TipoPilha Pilha;

Pilha *insere(Pilha *atual, int v);
Pilha *recupera(Pilha *atual);
int getTamanho(Pilha *atual);


int main()
{

    setlocale(LC_ALL, "Portuguese");

    Pilha *pilha = NULL;
    int opcao, valor;

    do
    {
        printf("\n\n1 - Inserir\n");
        printf("2 - Recuperar\n");
        printf("3 - Tamanho\n");
        printf("4 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor a ser inserido: ");
            scanf("%d", &valor);
            pilha = insere(pilha, valor);
            break;
        case 2:
            pilha = recupera(pilha);
            break;
        case 3:
            printf("Tamanho da pilha: %d\n", getTamanho(pilha));
            break;
        case 4:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 4);

    return 0;
}

Pilha *insere(Pilha *atual, int v)
{
    Pilha *novo = (Pilha *)malloc(sizeof(Pilha));
    novo->info = v;
    novo->prox = atual;
    return novo;
}

Pilha *recupera(Pilha *atual)
{
    if (atual != NULL)
    {
        printf("Valor recuperado: %d\n", atual->info);
        return atual->prox;
    }
    else
    {
        printf("Pilha vazia!\n");
        return NULL;
    }
}

int getTamanho(Pilha *atual)
{
    int cont = 0;
    while (atual != NULL)
    {
        cont++;
        atual = atual->prox;
    }
    return cont;
}
