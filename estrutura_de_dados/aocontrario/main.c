#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void stringInvert(char *s);

int main()
{
    char *s = (char *) malloc(sizeof(char) * MAX);

    printf("Insira a string: ");
    gets(s);

    stringInvert(s);

    system("pause");

    return 0;
}

void stringInvert(char *s){

int tamanho = strlen(s);

for(int i = tamanho-1; i >= 0; i--){
    printf("%c", s[i]);
}

printf("\n");
}
