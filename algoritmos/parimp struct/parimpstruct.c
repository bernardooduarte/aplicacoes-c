#include <stdio.h>
#include <locale.h>

struct estrutura {
    int num;
};

typedef struct estrutura Numero;

void parImp(Numero number);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Numero number;

    printf("Insira um n�mero inteiro positivo (ou zero para sair): ");
    scanf("%d", &number.num);

    while (number.num != 0) {
        parImp(number);

        printf("\n\nInsira outro n�mero inteiro positivo (ou zero para sair): ");
        scanf("%d", &number.num);
    }

    return 0;
}

void parImp(Numero number) {
    if (number.num % 2 == 0) {
        printf("O n�mero digitado � par");
    } else {
        printf("O n�mero digitado � �mpar");
    }
}
