#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char caractere;

    printf("Insira o caractere: ");
    scanf("%c", &caractere);

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        printf("� vogal\n");
    } else {
        printf("N�o � vogal\n");
    }

    system("pause");
    return 0;
}
