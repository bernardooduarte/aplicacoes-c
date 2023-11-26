#include <stdio.h>
#include <locale.h>

float numeros();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float media = numeros();
    printf("A média é: %.2f\n", media);
    return 0;
}

float numeros()
{
    int qtdnum, contador = 0, nums;
    float media = 0;

    printf("Insira a quantidade de números inteiros: ");
    scanf("%d", &qtdnum);

    while (contador < qtdnum)
    {
        printf("Insira o número inteiro: ");
        scanf("%d", &nums);
        media = media + nums;
        contador++;
    }

    media = media / qtdnum;
    return media;
}

