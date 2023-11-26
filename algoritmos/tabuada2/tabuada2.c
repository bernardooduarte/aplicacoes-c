#include <stdio.h>
#include <conio.h>
#include <locale.h>

struct estrutura{

int numero;
int formula;
int contador;

};

typedef struct estrutura Dados;

void tabuada(Dados dados);

int main(){

setlocale(LC_ALL, "Portuguese");

Dados dados;

tabuada(dados);

system("pause");

return 0;


}

void tabuada(Dados dados){

char continua = 'S';

while(continua == 'S' || continua == 's'){

    printf("Insira o número: ");
    scanf("%d", &dados.numero);

    dados.contador = 1;

    while(dados.contador <= 10){
        dados.formula = dados.numero * dados.contador;
        printf("%d * %d = %d\n", dados.numero, dados.contador, dados.formula);
        dados.contador++;
    }

    printf("\nDeseja continuar [S/N]? ");
    continua = getche();

    printf("\n\n");
}

}
