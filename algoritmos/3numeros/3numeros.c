#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int pnumero, snumero, tnumero;

printf("Insira o primeiro número inteiro:");
scanf("%d", &pnumero);

printf("Insira o segundo número inteiro:");
scanf("%d", &snumero);

printf("Insira o terceiro número inteiro:");
scanf("%d", &tnumero);

if ((pnumero < snumero)&&(pnumero < tnumero)) {

    printf("O menor número é: %d\n", pnumero);
} else if ((snumero < pnumero)&& (snumero < tnumero)) {

   printf("O menor número é: %d\n", snumero);
} else {

printf("O menor número é: %d\n", tnumero);

}

system("pause");
return 0;



}
