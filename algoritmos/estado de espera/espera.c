#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
    float segundos;
    printf("Por quanto tempo voce esta em estado de espera:");
    scanf("%f", &segundos);
    printf("Programa em estado de espera por %.2f segundos.", segundos);
    return 0;
}
