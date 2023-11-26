#include <stdio.h>
#include <locale.h>

struct estrutura
{

    float altze;
    float txze;

    float altchico;
    float txchico;
};

typedef struct estrutura Dados;

int calculo(Dados dados);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    printf("Insira a altura do Zé em metros: ");
    scanf("%f", &dados.altze);

    printf("Insira a taxa de crescimento do Zé em metros: ");
    scanf("%f", &dados.txze);

    printf("Insira a altura do Chico em metros: ");
    scanf("%f", &dados.altchico);

    printf("Insira a taxa de crescimento do Chico em metros: ");
    scanf("%f", &dados.txchico);

    if (calculo(dados) == 1)
    {
        printf("Zé demorará 1 ano para ultrapassar Chico!\n");
    }
    else
    {
        printf("Zé demorará %d anos para ultrapassar Chico!\n", calculo(dados));
    }

    system("pause");

    return 0;

}

int calculo(Dados dados)
{

    int contador = 0;

    while (dados.altze < dados.altchico)
    {
        dados.altze = dados.altze + dados.txze;
        dados.altchico = dados.altchico + dados.txchico;
        contador++;
    }
    if (dados.altze > dados.altchico)
    {
        return contador;
    }
}
