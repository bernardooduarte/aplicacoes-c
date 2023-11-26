#include <stdio.h>
#include <locale.h>

void numPer(int num);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Insira o número: ");
    scanf("%d", &num);

    numPer(num);

    return 0;
}

void numPer(int num) {
    int contador = 1;
    int somaDivisores = 0;

    while (contador < num) {
        if (num % contador == 0) {
            somaDivisores += contador;
        }
        contador++;
    }

    if (somaDivisores == num) {
        printf("Verdadeiro\n", num);
    } else {
        printf("Falso\n", num);
    }
}
