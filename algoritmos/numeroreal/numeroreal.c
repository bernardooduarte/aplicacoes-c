#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

double pnumero, snumero;
float media;

printf("Insira o primeiro n�mero real:");
scanf("%lf", &pnumero);


printf("Insira o segundo n�mero real:");
scanf("%lf", &snumero);

media = (pnumero + snumero) / 2;

printf("A m�dia aritm�tica �: %.2f\n", media);

system("pause");
return 0;

}
