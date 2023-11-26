#include <stdio.h>
#include <stdbool.h>

int main() {
    // Define as entradas A, B, C e D
    bool A = true;
    bool B = false;
    bool C = true;
    bool D = true;

    // Calcula as saídas intermediárias
    bool and1 = A && B && C;
    bool and2 = A && B && D;
    bool and3 = A && C && D;
    bool and4 = B && C && D;



    // Desenha o circuito
    printf("         +---+      +---+\n");
    printf("         |   |      |   |\n");
    printf("    A ---| %d |--+---| %d |--+\n", A, and1);
    printf("         |   |  |   |   |  |\n");
    printf("    B ---| %d |--|---| %d |--|--- S\n", B, and2);
    printf("         |   |  |   |   |  |\n");
    printf("    C ---| %d |--+---| %d |--+\n", C, and3);
    printf("         |   |      |   |\n");
    printf("    D ---| %d |------+   |\n", D);
    printf("         +---+          |\n");
    printf("                       ---\n");
    printf("                        |\n");
    printf("                       GND\n");

    return 0;
}
