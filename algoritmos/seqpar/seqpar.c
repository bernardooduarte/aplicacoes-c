#include <stdio.h>
#include <locale.h>

void seqPar(int num);

main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Insira o número inteiro positivo: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Número inteiro positivo inválido\n");
        system("pause");
        return 0;
    }

    seqPar(num);

    system("pause");

    return 0;
}


void seqPar(int num){

int contador = 0;

while (contador <= num){
    if(contador % 2 == 0){
        printf("%d ", contador);
    }
    contador++;
}
    printf("\n");
}
