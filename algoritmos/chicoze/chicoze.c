#include <stdio.h>
#include <locale.h>

struct estrutura {
    float altchico;
    float txchico;
    float formulachico;

    float altze;
    float txze;
    float formulaze;
};

typedef struct estrutura Dados;

int calculo(Dados chico, Dados ze);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Dados chico, ze;

    printf("Insira a altura do Chico: ");
    scanf("%f", &chico.altchico);

    printf("Insira a taxa de crescimento do Chico: ");
    scanf("%f", &chico.txchico);

    printf("\nInsira a altura do Zé: ");
    scanf("%f", &ze.altze);

    printf("Insira a taxa de crescimento do Zé: ");
    scanf("%f", &ze.txze);

    int resultado = calculo(chico, ze);

    printf("O Zé demorará %d anos para ultrapassar o Chico!\n", resultado);

    system("pause");

    return 0;
}

int calculo(Dados chico, Dados ze){
    int anos = 0;

    while (ze.altze < chico.altchico){
        chico.altchico += chico.txchico;
        ze.altze += ze.txze;

        anos++;
    }

    if(ze.altze > chico.altchico){
        return anos;
    }


}
