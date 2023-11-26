#include <stdio.h>
#include <locale.h>

struct estrutura
{

    int matricula;
    float nota1;
    float nota2;
    float media;
    int faltas;
};

typedef struct estrutura Ficha;
void aluno(Ficha ficha);

main()
{

    setlocale(LC_ALL, "Portuguese");

    Ficha ficha;

    printf("Insira o número da matrícula: ");
    scanf("%d", &ficha.matricula);

    printf("Insira a primeira nota do aluno: ");
    scanf("%f", &ficha.nota1);

    printf("Insira a segunda nota do aluno: ");
    scanf("%f", &ficha.nota2);

    printf("Insira a quantidade de faltas do aluno: ");
    scanf("%d", &ficha.faltas);

    aluno(ficha);

    system("pause");
    return 0;
}

void aluno(Ficha ficha)
{

    printf("\nAluno <%d>, suas notas:", ficha.matricula);

    printf("\nNota 1: %.1f", ficha.nota1);

    printf("\nNota 2: %.1f", ficha.nota2);

    printf("\nQuantidade de faltas: %d", ficha.faltas);

    ficha.media = (ficha.nota1 + ficha.nota2) / 2;

    if (ficha.media >= 6.0 && ficha.faltas <= 10)
    {
        printf("\nVocê está aprovado!\n");
    }
    else
    {
        printf("\nVocê está reprovado!\n");
    }
}
