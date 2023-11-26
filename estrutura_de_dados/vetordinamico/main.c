#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *vetor = malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++)
    {
        printf("Insira o %d° número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    printf("\n");

    system("pause");

    return 0;
}
