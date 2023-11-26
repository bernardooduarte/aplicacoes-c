#include <time.h>
#define MAX 5

int calculaClassificados( int candidatos[MAX], int media);
int calculaMedia( int candidatos[MAX]);

main(){
    srand(time(NULL));

    int candidatos[MAX];
    int i;
    int media;


    //preenche o vetor com numeros aleatorios para facilita os testes
    for(i=0; i<MAX; i++){
        candidatos[i] = rand() % 1000;
        printf("\n%d", candidatos[i]); //imprime apenas para conferir
    }

    media = calculaMedia(candidatos);
    printf("\nMedia: %d", media);
    printf("\nCandidatos classificados: %d", calculaClassificados(candidatos, media));
}

int calculaClassificados( int candidatos[MAX], int media){
    int i;
    int contador = 0;
    for(i=0; i<MAX; i++){
        if (candidatos[i] >= media){
            contador++;
        }
    }
    return contador;
}

int calculaMedia( int candidatos[MAX]){
    int i;
    int media = 0;
    for(i=0; i<MAX; i++){
        media += candidatos[i];
    }
    return media / MAX;
}
