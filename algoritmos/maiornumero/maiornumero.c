#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;

    printf("Insira o primeiro número:");
    scanf("%d", &numero1);

    printf("Insira o segundo número:");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    { printf("O maior número é: %d\n", numero1);

    } else {
        printf("O maior número é: %d\n", numero2);

    }

    system("pause");
    return 0;
}
