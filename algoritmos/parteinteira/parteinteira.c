#ifndef PARTEINTEIRA_C_INCLUDED
#define PARTEINTEIRA_C_INCLUDED

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


#endif // PARTEINTEIRA_C_INCLUDED
