#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    contagem();

    system("pause");
    return 0;

}

int contagem()
{

    int nump, contador, i;

    printf("Insira o número inteiro positivo: ");
    scanf("%d", &nump);

    if(nump < 0)
    {
        printf("Número positivo inválido\n");
        system("pause");
        return 0;
    }

    contador = nump;
    i = 0;

    while(contador >= 0)
    {
        printf("%d ", contador);
        contador--;
    }
}
