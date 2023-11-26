#include <stdio.h>
#include <conio.h>
#include <locale.h>

struct estrutura{

int num;

};

typedef struct estrutura Dados;

void numper(Dados dados);

main(){

setlocale(LC_ALL, "Portuguese");

Dados dados;

numper(dados);

system("pause");

return 0;

}

void numper(Dados dados){

char continua = 'S';

while(continua == 'S' || continua == 's'){

    printf("Insira o número: ");
    scanf("%d", &dados.num);

    int contador = 1;

    int soma;

    while(contador < dados.num){
        if(dados.num % contador == 0){
            soma = soma + contador;
        }
        contador++;
    }

    if(soma == dados.num){
        printf("Verdadeiro\n");
    } else{
        printf("Falso\n");
    }

    printf("Deseja continuar [S/N]? ");
    continua = getche();

    printf("\n\n");
}
}
