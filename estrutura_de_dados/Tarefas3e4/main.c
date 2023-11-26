#include <locale.h>
#include <stdlib.h>
#include <locale.h>

struct EstruturaAluno
{
    int matricula;
    char *nome;
    float nota;

    struct EstruturaAluno *prox;
};

typedef struct EstruturaAluno Aluno;

Aluno *insereInicio(Aluno *atual, Aluno no);
Aluno *insereFinal(Aluno *atual, Aluno no);
void imprime(Aluno *atual);
Aluno *busca(Aluno *atual, int matricula);
float calcularMedia(Aluno *atual);

main()
{
    setlocale(LC_ALL, "Portuguese");

    Aluno *listaAluno = NULL;   //Cria lista vazia

    Aluno no;
    no.matricula = 111;
    no.nome = "Flavio";
    no.nota = 10.0;
    listaAluno = insereInicio(listaAluno, no);

    no.matricula = 222;
    no.nome = "Zé";
    no.nota = 10.0;
    listaAluno = insereInicio(listaAluno, no);

    no.matricula = 333;
    no.nome = "Tim";
    no.nota = 10.0;
    listaAluno = insereInicio(listaAluno, no);

    no.matricula = 444;
    no.nome = "Frejat";
    no.nota = 10.0;
    listaAluno = insereInicio(listaAluno, no);

    no.matricula = 555;
    no.nome = "Milton";
    no.nota = 10.0;
    listaAluno = insereFinal(listaAluno, no);

    imprime(listaAluno);

    Aluno *resultado = busca(listaAluno, 555);
    if (resultado != NULL)
    {
        printf("\nMatrícula: %d", resultado->matricula);
        printf("\nNome.....: %s", resultado->nome);
        printf("\nNota.....: %f", resultado->nota);
        printf("\n");
    }
    else
    {
        printf("\nMatrícula não encontrada!");
    }

    printf("\nA média é: %.2f\n", calcularMedia(listaAluno));

    system("pause");
    return 0;
}

Aluno *insereInicio(Aluno *atual, Aluno no)
{
    Aluno *novo = (Aluno*) malloc(sizeof(Aluno));

    novo->matricula = no.matricula;
    novo->nome = no.nome;
    novo->nota = no.nota;

    if (atual == NULL)  //Lista está vazia?
    {
        novo->prox = NULL;
    }
    else
    {
        novo->prox = atual;
    }
    return novo;
}

Aluno *insereFinal(Aluno *atual, Aluno no)
{

    if(atual == NULL)
    {
        return insereInicio(atual, no);
    }

    Aluno *inicio = atual;

    while(atual->prox != NULL)
    {
        atual = atual->prox;
    }

    Aluno *novo = (Aluno *) malloc(sizeof(Aluno));

    novo->matricula = no.matricula;
    novo->nome = no.nome;
    novo->nota = no.nota;
    novo->prox = NULL;

    atual->prox = novo;

    return inicio;

}

void imprime(Aluno *atual)
{
    if (atual == NULL)
    {
        printf("\nLista Vazia!");
    }

    while(atual != NULL)
    {
        printf("\nMatrícula: %d", atual->matricula);
        printf("\nNome.....: %s", atual->nome);
        printf("\nNota.....: %f", atual->nota);
        printf("\n");
        atual = atual->prox;
    }
}

Aluno *busca(Aluno *atual, int matricula)
{
    while(atual != NULL)
    {
        if (atual->matricula == matricula)
        {
            return atual;
        }
        atual = atual->prox;
    }
    return NULL;
}

float calcularMedia(Aluno *atual)
{
    float soma = 0.0;
    int cont = 0;

    while(atual != NULL)
    {
        soma += atual->nota;
        atual = atual->prox;
        cont++;
    }

    return soma / cont;
}
