#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p = (int *) malloc(sizeof(int) * 10000);

    if(*p == NULL)
    {
        printf("Aloca��o mal-sucedida");
    }
    else
    {
        printf("Primeiro endere�o: %d\n", p);
        printf("�ltimo endere�o: %d", p+9999);
    }


    return 0;
}
