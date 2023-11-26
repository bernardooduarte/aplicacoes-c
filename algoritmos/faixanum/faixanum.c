#include <stdio.h>
#include <locale.h>

struct estrutura{

int faixamin;
int faixamax;
};

typedef struct estrutura Dados;

void faixaNum(Dados dados);

int main(){

setlocale(LC_ALL, "Portuguese");

Dados dados;

printf("Insira a faixa mínima: ");
scanf("%d", &dados.faixamin);

printf("Insira a faixa máxima: ");
scanf("%d", &dados.faixamax);

faixaNum(dados);

system("pause");

return 0;

}

void faixaNum(Dados dados){

while(dados.faixamin <= dados.faixamax){

    printf("%d ", dados.faixamin);

    dados.faixamin++;
}
printf("\n");
}
