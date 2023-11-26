#include <stdio.h>
#include <stdlib.h>

int main() {

float a, b, c, area;

printf("Bem-vindo a calculadora da area de um triangulo");
sleep(3);

printf("\nInsira a medida A:");
scanf("%f", &a);

printf("Insira a medida B:");
scanf("%f", &b);

printf("Insira a medida C:");
scanf("%f", &c);

area = (a + b + c) / 2;

if ( a + b > c , a + c > b, b + c > a) {
    printf("A area e %.2f", area);
} else {
  printf("Nao foi possivel calcular");
}

return 0;
}
