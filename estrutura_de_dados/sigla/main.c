#include <string.h>
#define MAX 30

char *abreviaNome(char *nome);

main()
{
    char *nome = (char*) malloc(MAX);
    printf("Nome completo: ");
    gets(nome);
    printf("%s", abreviaNome(nome));
}

char *abreviaNome(char *nome)
{
    char *sigla = (char*) malloc(MAX);

    *sigla = *nome;
    int j = 1;
    int i;
    for(i=1; i<strlen(nome); i++)
    {
        if (*(nome+i-1) == ' ')
        {
            *(sigla + j) = *(nome + i);
            j++;
        }
    }
    return sigla;
}

