#define MAX 5
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p = (int) malloc(sizeof(int) * MAX);

    int i;
    for (i=0; i<MAX; i++)
    {
        printf("Informe um n�mero: ");
        scanf("%d", p+i);
    }

    printf("\n\n*** Mostra os valores - Do primeiro ao �ltimo ***");
    for (i=0; i<MAX; i++)
    {
        printf("\nParte de valor do %do. inteiro: %d", i+1, *(p + i));
    }

    printf("\n\n*** Mostra os valores - Do �ltimo ao primeiro ***");
    for (i=MAX-1; i>=0; i--)
    {
        printf("\nParte de valor do %do. inteiro: %d", i+1, *(p + i));
    }
}

