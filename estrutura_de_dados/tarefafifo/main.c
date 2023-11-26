#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


struct No
{
    char senha[10];
    struct No* proximo;
};

struct Fila
{
    struct No* inicio;
    struct No* fim;
    int contador;
};

typedef struct No No;
typedef struct Fila Fila;

Fila* inicializarFila()
{
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;
    f->contador = 1;
    return f;
}

int estaVazia(Fila* f)
{
    return f->fim == NULL;
}

void enfileirar(Fila* f, char* senha)
{
    No* temp = (No*)malloc(sizeof(No));
    strcpy(temp->senha, senha);
    temp->proximo = NULL;

    if (f->fim == NULL)
    {
        f->inicio = f->fim = temp;
    }

    f->fim->proximo = temp;
    f->fim = temp;
}

void desenfileirar(Fila* f)
{
    if (estaVazia(f))
    {
        printf("Fila está vazia\n");
    }

    No* temp = f->inicio;
    f->inicio = f->inicio->proximo;

    if (f->inicio == NULL)
    {
        f->fim = NULL;
    }

    printf("Atendendo: %s\n", temp->senha);
    free(temp);
}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    Fila* f = inicializarFila();
    int escolha;
    char senha[10];
    do
    {
        printf("*****************************************\n");
        printf("SISTEMA DE GERENCIAMENTO DE SENHAS\n");
        printf("*****************************************\n");
        printf("1. Gerar senha.\n");
        printf("2. Atender usuário.\n");
        printf("3. Sair do sistema.\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            sprintf(senha, "IFET%d", f->contador);
            enfileirar(f, senha);
            printf("Gerada: %s\n", senha);
            f->contador++;
            break;
        case 2:
            desenfileirar(f);
            break;
        }
    }
    while (escolha != 3);

    system("pause");

    return 0;
}
