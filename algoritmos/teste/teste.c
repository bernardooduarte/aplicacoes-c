#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int numero;

printf("Insira o número real:");
scanf("%d", &numero);

printf("A parte inteira do número é: %d\n", numero);

system("pause");
return 0;


}
