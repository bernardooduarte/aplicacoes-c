#include <stdio.h>
#include <locale.h>

float calcularTotal(int MAX, float produtos[MAX], int formpag);

int main(){

setlocale(LC_ALL, "Portuguese");

int MAX;

printf("Insira a quantidade de produtos para a venda: ");
scanf("%d", &MAX);

printf("\n");

float produtos[MAX];

int i;
for(i = 0; i < MAX; i++){
    printf("Insira o valor do %d° produto: ", i + 1);
    scanf("%f", &produtos[i]);
}

int formpag;

printf("\nDeseja pagar a vista ou no cartão de crédito (0 - a vista ou 1 para cartão de crédito): ");
scanf("%d", &formpag);

 if(formpag == 0){
   printf("\n\nO valor total será 2 parcelas de %.2f\n", calcularTotal(MAX, produtos, formpag));
} else if (formpag == 1){
    printf("\nO valor total será: %.2f\n\n", calcularTotal(MAX, produtos, formpag));
} else {
    printf("\n\nForma de pagamento inválida!\n\n");
}

system("pause");
return 0;
}

float calcularTotal(int MAX, float produtos[MAX], int formpag){

float somarPrecos = 0.0;
int i;
for(i = 0; i < MAX; i++){
    somarPrecos += produtos[i];
}

if(formpag == 0){
    float formv = (somarPrecos - (somarPrecos * 0.05)) / 2;
    return formv;
}
if (formpag == 1){
    float formc = somarPrecos + (somarPrecos * 0.05);
    return formc;
}
}
