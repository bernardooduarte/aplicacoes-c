#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p = (int *) malloc(sizeof(int) * 10000);

    if(*p == NULL)
    {
        printf("Alocação mal-sucedida");
    }
    else
    {
        printf("Primeiro endereço: %d\n", p);
        printf("Último endereço: %d", p+9999);
    }


    return 0;
}
