#include <stdio.h>

#define PI 3.1415

 int main()
 {
float raio, area;
printf("Digite o raio: ");
scanf("%f", &raio);

area = PI * raio * raio;
 printf("Área do círculo = %.2f \n",area);

 return 0;
 }
