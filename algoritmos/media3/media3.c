#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int num1, num2, num3;
float media;

printf("Insira o primeiro n�mero: ");
scanf("%d", &num1);

printf("Insira o segundo n�mero: ");
scanf("%d", &num2);

printf("Insira o terceiro n�mero: ");
scanf("%d", &num3);

media = (num1 + num2 + num3) / 3;

printf("A m�dia entre os n�meros �: %.2f\n", media);

system("pause");
return 0;
}
