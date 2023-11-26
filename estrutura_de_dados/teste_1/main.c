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
Aluno *buscarAluno(Aluno *atual, int matricula);
void imprime(Aluno *atual);

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
    no.nome = "Bono";
    no.nota = 10.0;
    listaAluno = insereFinal(listaAluno, no);

    imprime(listaAluno);

    int buscaMatricula;
    printf("Insira a matrícula que deseja buscar: ");
    scanf("%d", &buscaMatricula);

    if(buscaMatricula == NULL)
    {
        printf("Matrícula não encontrada!");
    }
    else
    {
        Aluno *alunoEncontrado = buscarAluno(listaAluno, buscaMatricula);
        if(buscaMatricula == NULL)
        {
            printf("Matrícula não encontrada!");
        }
        else
        {
            printf("Aluno encontrado: \n");
            printf("Matrícula: %d\n", alunoEncontrado->matricula);
            printf("Nome: %s\n", alunoEncontrado->nome);
            printf("Nota: %.2f\n", alunoEncontrado->nota);
        }
    }
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
    Aluno *novo = (Aluno*) malloc(sizeof(Aluno));

    novo->matricula = no.matricula;
    novo->nome = no.nome;
    novo->nota = no.nota;
    novo->prox = NULL;

    if (atual == NULL)  //Lista está vazia?
    {
        atual = novo;
    }
    else
    {
        Aluno *aux = atual;
        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    return atual;
}

Aluno *buscarAluno(Aluno *atual, int matricula)
{
    Aluno *aux = atual;
    while(aux != NULL)
    {
        if (aux->matricula == matricula)
        {
            return aux;
        }
        aux = aux->prox;
    }
    return NULL;
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
