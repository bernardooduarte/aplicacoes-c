#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int numero;

printf("Insira o n�mero:");
scanf("%d", &numero);

if (numero > 0.0) {

    printf("O n�mero � positivo.\n");
} else if (numero < 0.0) {

   printf("O n�mero � negativo.\n");

} else {

   printf("O n�mero � zero, ent�o n�o � nem positivo nem negativo.\n");


}
system("pause");
return 0;


}
