#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int pnumero, snumero, tnumero;

printf("Insira o primeiro n�mero inteiro:");
scanf("%d", &pnumero);

printf("Insira o segundo n�mero inteiro:");
scanf("%d", &snumero);

printf("Insira o terceiro n�mero inteiro:");
scanf("%d", &tnumero);

if ((pnumero < snumero)&&(pnumero < tnumero)) {

    printf("O menor n�mero �: %d\n", pnumero);
} else if ((snumero < pnumero)&& (snumero < tnumero)) {

   printf("O menor n�mero �: %d\n", snumero);
} else {

printf("O menor n�mero �: %d\n", tnumero);

}

system("pause");
return 0;



}
