#include <stdio.h>
#include <locale.h>

struct estrutura {
int altura;
int i;
int j;
};

typedef struct estrutura Dados;

void altTri(Dados dados);

main(){

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    printf("Insira a altura do triângulo: ");
    scanf("%d", &dados.altura);

    altTri(dados);

    return 0;


}


void altTri(Dados dados){

dados.i = 1;


while (dados.i <= dados.altura){
    dados.j = 1;
    while (dados.j <= dados.i){
        printf("*");
        dados.j++;
    }
    printf("\n");
    dados.i++;
}

}
