#include <stdio.h>
#include <math.h>

main()
{
    float corda, radianos, altura;

    radianos = 3.14159265 * 30 / 180;
    corda = (100 / cos(radianos));

    printf("\nMedida da corda: %.2f", corda);
    altura = sin(radianos) * corda;
    printf("\nAltura da Estrutura Metálica: %.2f", altura);
}
