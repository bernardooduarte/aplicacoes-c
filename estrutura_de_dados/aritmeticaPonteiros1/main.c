#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p = (int) malloc(sizeof(int) * 10);


    int i;
    for (i=0; i<10; i++)
    {
        printf("\nParte de posição do %do. inteiro: %d", i+1, p+i);
    }
}
