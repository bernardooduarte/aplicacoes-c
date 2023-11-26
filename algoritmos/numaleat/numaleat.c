#include <stdio.h>
#include <locale.h>
#include <time.h>

struct estrutura{

int numero;
int palpite;
int tentativas;
};

typedef struct estrutura Dados;

main(){

Dados dados;
}

void numAleat(Dados dados){
srand(time(0));

dados.numero = rand() % 100 + 1;

}
