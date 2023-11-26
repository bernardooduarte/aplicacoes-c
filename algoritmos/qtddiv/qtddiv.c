#include <stdio.h>
#include <conio.h>
#include <locale.h>

struct estrutua{

int num;
int qtd;

};

typedef struct estrutua Dados;

void qtddiv(Dados dados);

int main(){

setlocale(LC_ALL, "Portuguese");

Dados dados;

qtddiv(dados);

system("pause");

return 0;

}

void qtddiv(Dados dados){

char continua = 'S';


while(continua == 'S' || continua == 's'){

    printf("Insira o número inteiro positivo: ");
    scanf("%d", &dados.num);

    dados.qtd = 0;

    int contador = 1;

    while(contador <= dados.num){
        if(dados.num % contador == 0){
            dados.qtd++;
        }
        contador++;
    }

     printf("A quantidades de divisores são: %d", dados.qtd);

     printf("\n\nDeseja continuar [S/N]? ");
     continua = getche();

     printf("\n\n");
}

}
