#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p = (int) malloc(sizeof(int));
    *p = 100;

    printf("\nParte de posi��o de p: %d", p);
    printf("\nParte de valor de p: %d", *p);
}
