#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char caractere;

    printf("Insira o caractere: ");
    scanf("%c", &caractere);

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        printf("É vogal\n");
    } else {
        printf("Não é vogal\n");
    }

    system("pause");
    return 0;
}
