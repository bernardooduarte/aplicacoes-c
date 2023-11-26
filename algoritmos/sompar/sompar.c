#include <stdio.h>
#include <locale.h>

int somPar(int num);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Insira o n�mero inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        return 0;
    }

    int resultado = somPar(num);
    printf("A soma dos n�meros pares entre 1 e %d �: %d\n", num, resultado);

    getchar();
    return 0;
}

int somPar(int num) {
    int contador = 1;
    int soma = 0;

    while (contador <= num) {
        if (contador % 2 == 0) {
            soma += contador;
        }
        contador++;
    }

    return soma;
}
