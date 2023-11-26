#include <stdio.h>
#include <locale.h>
#include <string.h>

int contarCaracteres(char frase[9999]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    char frase[9999];

    printf("Insira a frase: ");
    fgets(frase, sizeof(frase), stdin);

    int resultado = contarCaracteres(frase);

    printf("\nA quantidade de caracteres na frase é: %d\n\n", resultado);

    system("pause");

    return 0;
}

int contarCaracteres(char frase[9999]) {
    char caracteres[] = "QWERTYUIOPASDFGHJKLÇZXCVBNMqwertyuiopasdfghjklçzxcvbnm";

    int i;
    int qtdc = 0;

    for (i = 0; i < strlen(frase); i++) {
        if (strchr(caracteres, frase[i]) != NULL) {
            qtdc++;
        }
    }

    return qtdc;
}
