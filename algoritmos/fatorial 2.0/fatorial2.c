#include <stdio.h>
#include <conio.h>
#include <locale.h>

struct estrutura{

int num;
int formula;
};

typedef struct estrutura Dados;

void fatorial(Dados dados);

int main(){

setlocale(LC_ALL, "Portuguese");

Dados dados;

fatorial(dados);

return 0;

}

void fatorial(Dados dados){

char continua = 'S';

while(continua == 'S' || continua == 's'){
    printf("Insira o número para fatorar: ");
    scanf("%d", &dados.num);

    int contador = 1;
    dados.formula = 1;

    while (contador <= dados.num){
        dados.formula = dados.formula * contador;
        contador++;
    }

    printf("O resultado é: %d", dados.formula);

    printf("\n\nDeseja continuar [S/N]? ");
    continua = getche();

    printf("\n\n");
}

}
