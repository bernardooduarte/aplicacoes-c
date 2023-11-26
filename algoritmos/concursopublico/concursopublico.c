#include <stdio.h>
#include <locale.h>

int classificarCandidatos(int MAX, float notas[MAX], float notamin);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int MAX;

    printf("Insira a quantidade de candidatos: ");
    scanf("%d", &MAX);


    float notas[MAX], notamin;

    printf("Insira a pontuação mínima para a classificação dos candidatos: ");
    scanf("%f", &notamin);

    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("Insira a %da nota: ", i+1);
        scanf("%f", &notas[i]);
    }

    int resultado = classificarCandidatos(MAX, notas, notamin);

    printf("A quantidade de candidatos classificados é: %d\n", resultado);

    system("pause");

    return 0;
}

int classificarCandidatos(int MAX, float notas[MAX], float notamin)
{

    int i;
    int contadorcand = 0;
    for(i = 0; i < MAX; i++)
    {
        if(notas[i] >= notamin)
        {
            contadorcand++;
        }
    }

    return contadorcand;

}
