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

    printf("Insira o primeiro n�mero par: ");
    scanf("%d", &num1);

    printf("Insira o segundo n�mero par: ");
    scanf("%d", &num2);

    if (num1 % 2 != 0) {
        valid1 = 1;
    }

    if (num2 % 2 != 0) {
        valid2 = 1;
    }

    if (valid1 != 0 || valid2 != 0) {
        printf("Um dos n�meros n�o � par.\n");
        return 0;
    }

    if (num1 < 0 || num2 < 0) {
        printf("Erro, n�mero inteiro negativo.\n");
        return 0;
    }

    formula = num1 + num2;
    printf("O resultado da soma �: %d\n", formula);
    return 0;
}
