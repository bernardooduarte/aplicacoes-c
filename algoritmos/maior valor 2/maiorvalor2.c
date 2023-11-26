#include <stdio.h>
#include <locale.h>
#define MAX 10

float calcularMaiorValor(float valores[MAX]);

int main(){

setlocale(LC_ALL, "Portuguese");

float valores[MAX];

int i;

for(i = 0; i < MAX; i++){
    printf("Insira o %d° valor: ", i + 1);
    scanf("%f", &valores[i]);
}

printf("\nO maior valor é: %.1f\n\n", calcularMaiorValor(valores));

system("pause");

return 0;

}

float calcularMaiorValor(float valores[MAX]){

float maiorValor = 0;
int i;

for(i = 0; i < MAX; i++){
    if(valores[i] > maiorValor){
        maiorValor = valores[i];
    }
}
    return maiorValor;
}
