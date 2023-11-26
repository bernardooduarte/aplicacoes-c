#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {

setlocale(LC_ALL,"Portuguese");

float r, area, perimetro;

printf("Insira o valor do raio para calcular a área e o perímetro do círculo:");
scanf("%f", &r);

area = M_PI * pow(r,2);
perimetro = 2*M_PI*r;

printf("Calculando");
sleep(3);

printf(".");
sleep(1);

printf(".");
sleep(1);

printf(".");
sleep(1);

printf("\nA area do círculo é %.2f", area);
sleep(2);
printf("\nO perímetro do círculo é %.2f", perimetro);

return 0;
}
