#ifndef PARTEINTEIRA_C_INCLUDED
#define PARTEINTEIRA_C_INCLUDED

#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int numero;

printf("Insira o n�mero real:");
scanf("%d", &numero);

printf("A parte inteira do n�mero �: %d\n", numero);

system("pause");
return 0;


}


#endif // PARTEINTEIRA_C_INCLUDED
