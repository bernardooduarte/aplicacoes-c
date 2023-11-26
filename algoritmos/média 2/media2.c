#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float nota1, nota2, media;
  printf("Informe a Nota 1: ");
  scanf("%f", &nota1);
  printf("Informe a Nota 2: ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2;
  printf("Media: %f", media);
  return 0;
}
