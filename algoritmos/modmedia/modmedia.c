#include <stdio.h>
#include <locale.h>

int lerQuantidadeNumeros()
{

    int qtdnum;

    printf("Insira a quantidade de n�meros: ");
    scanf("%d", &qtdnum);

    return qtdnum;

}

float calcularMedia(int qtdnum)
{
    float media = 0, num;
    int cont = 0;

    while(cont < qtdnum)
    {

        printf("Insira o n�mero: ");
        scanf("%f", &num);

        media = media + num;
        cont = cont + 1;


    }
    }
    void exibirResultado(float media)
    {

        printf("O resultado da m�dia dos n�meros citados �: %.2f\n", media);

    }

    int main()
    {
        setlocale(LC_ALL, "Portuguese");

        int qtdnum;
        float media;

        qtdnum = lerQuantidadeNumeros();
        media = calcularMedia(qtdnum);
        exibirResultado(media);

        system("pause");

        return 0;
    }
