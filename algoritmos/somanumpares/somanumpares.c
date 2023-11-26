#include <stdio.h>
#include <locale.h>

int numinpos();

int main() {
    numinpos();
    system("pause");
    return 0;
}

int numinpos() {
    int num1, num2, formula = 0, valid1 = 0, valid2 = 0;

    printf("Insira o primeiro número par: ");
    scanf("%d", &num1);

    printf("Insira o segundo número par: ");
    scanf("%d", &num2);

    if (num1 % 2 != 0) {
        valid1 = 1;
    }

    if (num2 % 2 != 0) {
        valid2 = 1;
    }

    if (valid1 != 0 || valid2 != 0) {
        printf("Um dos números não é par.\n");
        return 0;
    }

    if (num1 < 0 || num2 < 0) {
        printf("Erro, número inteiro negativo.\n");
        return 0;
    }

    formula = num1 + num2;
    printf("O resultado da soma é: %d\n", formula);
    return 0;
}
