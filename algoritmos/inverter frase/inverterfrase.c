#include <string.h>
#define MAX 30

void imprime(char frase[MAX]);

main() {
    char frase[MAX];
    printf("Insira a frase: ");
    scanf("%s", &frase);

     printf("\n");

    imprime(frase);

    printf("\n\n");

    system("pause");

    return 0;
}

void imprime(char frase[MAX]){
    int i;
    for(i=strlen(frase)-1; i>=0; i--) {
        printf("%c",frase[i]);
    }
}

