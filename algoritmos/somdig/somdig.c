#include <stdio.h>
#include <locale.h>

int somDig(int num1, int num2) {
    int formula;

    formula = num1 + num2;

    printf("A soma dos d�gitos �: %d\n", formula);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Insira os d�gitos: ");
    scanf("%d %d", &num1, &num2);

    somDig(num1, num2);

    return 0;
}
