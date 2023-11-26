#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int numero;

printf("Insira o número:");
scanf("%d", &numero);

if (numero > 0.0) {

    printf("O número é positivo.\n");
} else if (numero < 0.0) {

   printf("O número é negativo.\n");

} else {

   printf("O número é zero, então não é nem positivo nem negativo.\n");


}
system("pause");
return 0;


}
