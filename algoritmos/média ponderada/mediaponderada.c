#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

float media1, media2, media3;

printf("Qual e a primeira media:");
scanf("%f", &media1);

printf("Qual e a segunda media:");
scanf("%f", &media2);

printf("Qual é a terceira media:");
scanf("%f", &media3);

float mediaponderada = media1 * 2 + media2 * 3 + media3 * 5 / 3 ;

printf("A media e: %.2f", mediaponderada);

return 0;

}
