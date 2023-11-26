#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int tamanhoString(char *s);

int main()
{
    char *s = (char*)malloc(sizeof(char) * MAX);

    printf("Insira a string: ");
    gets(s);

    printf("Tamanho da string: %d", tamanhoString(s));

    return 0;
}

int tamanhoString(char *s)
{

    return strlen(s);
}
