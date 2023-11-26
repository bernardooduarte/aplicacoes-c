#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 30

void tempMin(float *temps);
void tempMax(float *temps);
void tempMed(float *temps);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float *temps = malloc(sizeof(float) * MAX);

    for(int i = 0; i < MAX; i++)
    {
        printf("Insira a temperatura do dia %d: ", i+1);
        scanf("%f", temps+i);
    }

    tempMin(temps);
    tempMax(temps);
    tempMed(temps);

    system("pause");

    return 0;
}

void tempMin(float *temps)
{

    float minima = temps[0];

    for(int i = 0; i < MAX; i++)
    {
        if(temps[i] < minima)
        {
            minima = temps[i];
        }
    }

    printf("\nA temperatura m�nima do m�s �: %.1f\n", minima);
}

void tempMax(float *temps)
{

    float maxima = temps[0];

    for(int i = 0; i < MAX; i++)
    {
        if(temps[i] > maxima)
        {
            maxima = temps[i];
        }
    }

    printf("A temperatura m�xima do m�s �: %.1f\n", maxima);
}

void tempMed(float *temps)
{

    float soma = 0;

    for(int i = 0; i < MAX; i++)
    {
        soma+=temps[i];
    }

    float media = soma/MAX;

    printf("A temperatura m�dia do m�s �: %.2f\n", media);

}

