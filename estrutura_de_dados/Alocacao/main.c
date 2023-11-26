#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p = malloc(sizeof(int) * 10000);

    if(p == NULL)
    {
        printf("A alocação não foi bem sucedida\n");
    }
    else
    {
        printf("Primeiro endereço alocado: %d\n", p);
        printf("Último endereço alocado: %d\n", p+9999);
    }

    system("pause");

    return 0;
}
