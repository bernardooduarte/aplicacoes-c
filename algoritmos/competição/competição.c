#include <stdio.h>
#include <locale.h>

struct estrutura{
    int id;
    float pont;
};

typedef struct estrutura Dados;

Dados calcularMaiorNota(int MAX, Dados candidatos[MAX]);

int main(){

    setlocale(LC_ALL, "Portuguese");

    int MAX;
    printf("Insira a quantidade de candidatos: ");
    scanf("%d", &MAX);

    Dados candidatos[MAX];

    printf("\n");

    int i;
    for(i = 0; i < MAX; i++){

        printf("Insira a identifica��o do %d� candidato: ", i + 1);
        scanf("%d", &candidatos[i].id);

        printf("Insira a nota do candidato: ");
        scanf("%f", &candidatos[i].pont);

        printf("\n");
    }

    Dados vencedor = calcularMaiorNota(MAX, candidatos);

    printf("Candidato vencedor: \n");
    printf("Identifica��o: %d\nPontua��o: %.1f\n\n", vencedor.id, vencedor.pont);

    system("pause");

    return 0;
}

Dados calcularMaiorNota(int MAX, Dados candidatos[MAX]){

   Dados maior = candidatos[0];

    int i;
    for(i = 0; i < MAX; i++){
        if(candidatos[i].pont > maior.pont){
            maior = candidatos[i];
        }
    }
    return maior;
}
