#include <stdio.h>
#include <locale.h>
#include <math.h>

struct estrutura{
int a;
int b;
int c;
int delta;
int xa;
int xb;
};

typedef struct estrutura Coeficientes;

void calculo (Coeficientes coeficientes);

main(){

setlocale(LC_ALL, "Portuguese");

Coeficientes coeficientes;

printf("Insira o coeficiente A: ");
scanf("%d", &coeficientes.a);

printf("Insira o coeficiente B: ");
scanf("%d", &coeficientes.b);

printf("Insira o coeficiente C: ");
scanf("%d", &coeficientes.c);

calculo(coeficientes);

system("pause");

return 0;

}

void calculo (Coeficientes coeficientes){

coeficientes.delta = (coeficientes.b * coeficientes.b) - 4 * coeficientes.a * coeficientes.c;

if (coeficientes.delta >= 0) {
        coeficientes.xa = (-coeficientes.b + sqrt(coeficientes.delta)) / (2 * coeficientes.a);
        coeficientes.xb = (-coeficientes.b - sqrt(coeficientes.delta)) / (2 * coeficientes.a);

        printf("\nRaíz x1: %d", coeficientes.xa);
        printf("\nRaíz x2: %d\n", coeficientes.xb);
    } else {
        printf("\nNão existem raízes reais.\n");
    }
}
