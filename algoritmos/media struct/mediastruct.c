#include <stdio.h>
#include <math.h>

// Cria a struct estrutura1
struct estrutura2 {
    int x, y;
};

// Define um tipo de dado chamado Ponto, baseado na struct estrutura
typedef struct estrutura2 Ponto;

// Listagem dos protótipos das funções presentes no programa
Ponto leCoordenadas();
float calculaDistancia(Ponto p1, Ponto p2);

int main() {
    // Declara variáveis do tipo Ponto
    Ponto p1 = leCoordenadas();
    Ponto p2 = leCoordenadas();

    printf("\nDistancia entre os dois pontos: %f", calculaDistancia(p1, p2));

    return 0;
}

Ponto leCoordenadas() {
    Ponto ponto;

    printf("\nCoordenada X do Ponto: ");
    scanf("%d", &ponto.x);

    printf("Coordenada Y do Ponto: ");
    scanf("%d", &ponto.y);

    return ponto;
}

float calculaDistancia(Ponto p1, Ponto p2) {
    return sqrt(pow((p2.y - p1.y), 2) + pow((p2.x - p1.x), 2));
}
