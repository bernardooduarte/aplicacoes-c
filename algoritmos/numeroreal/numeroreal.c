#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

double pnumero, snumero;
float media;

printf("Insira o primeiro número real:");
scanf("%lf", &pnumero);


printf("Insira o segundo número real:");
scanf("%lf", &snumero);

media = (pnumero + snumero) / 2;

printf("A média aritmética é: %.2f\n", media);

system("pause");
return 0;

}
