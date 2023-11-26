#include <stdio.h>
#include <locale.h>
#include <conio.h>

struct estrutura{

int numero;

};

typedef struct estrutura Dados;

void par(Dados dados);

int main(){

setlocale(LC_ALL, "Portuguese");

Dados dados;

par(dados);

system("pause");

return 0;

}

void par(Dados dados){

char continua = 'S';
int contador = 0;

while(continua == 'S' || continua == 's'){

    printf("Insira o número inteiro positivo: ");
    scanf("%d", &dados.numero);

    contador = 0;

    while(contador <= dados.numero){
        if(contador % 2 == 0){
            printf("%d ",contador);
        }
        contador++;
    }

    printf("\nDeseja continuar [S/N]? ");
    continua = getche();

    printf("\n\n");
}

}
