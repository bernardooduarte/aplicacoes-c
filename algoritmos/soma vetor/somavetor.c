#include <stdio.h>
#include <locale.h>
#define MAX 5

int somarVetor(int numeros[MAX]);

int main(){

setlocale(LC_ALL, "Portuguese");

int numeros[MAX];
int i;

for(i = 0; i < MAX; i++){
    printf("Insira o %d� n�mero: ", i + 1);
    scanf("%d", &numeros[i]);
}

printf("\nA soma �: %d\n\n", somarVetor(numeros));

system("pause");

return 0;
}

int somarVetor(int numeros[MAX]){

int i;
int soma = 0;

for(i = 0; i < MAX; i++){
    soma += numeros[i];
}

return soma;
}
