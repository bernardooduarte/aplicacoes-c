#include <stdio.h>
#include <locale.h>
#include <math.h>

struct estruturaA
{

    float a, b, c;

};

struct estruturaB
{
    float delta;
    float xa, xb;

};

typedef struct estruturaA Coeficientes;
typedef struct estruturaB Raizes;

Raizes calcularRaizes(Coeficientes coeficientes);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    Coeficientes coeficientes;

    printf("Insira os coeficientes A, B e C da equação do 2º grau: ");
    scanf("%f %f %f", &coeficientes.a, &coeficientes.b, &coeficientes.c);

    if(coeficientes.a == 0)
    {
        printf("\nImpossível calcular\n\n");
        system("pause");
        return 0;
    }

    Raizes raizes = calcularRaizes(coeficientes);

    if(raizes.delta < 0)
    {
        printf("\nImpossível calcular\n\n");
        system("pause");
        return 0;
    }

    printf("\nX1 = %.5f\n", raizes.xa);
    printf("X2 = %.5f\n\n", raizes.xb);

    system("pause");
    return 0;
}

Raizes calcularRaizes(Coeficientes coeficientes)
{

    Raizes raizes;


    raizes.delta = (coeficientes.b * coeficientes.b) - (4*coeficientes.a*coeficientes.c);

    if(raizes.delta >= 0)
    {
        raizes.xa = (-coeficientes.b + sqrt(raizes.delta)) / (2*coeficientes.a);
        raizes.xb = (-coeficientes.b - sqrt(raizes.delta)) / (2*coeficientes.a);
    }
    return raizes;
}
