#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

char *concatena1(char *s1, char *s2);
char *concatena2(char *s1, char *s2);

int main()
{
    char *string1 = (char *) malloc(MAX * sizeof(char));
    printf("1a. String:");
    gets(string1);

    char *string2 = (char *) malloc(MAX * sizeof(char));
    printf("2a. String:");
    gets(string2);

    char *string3 = concatena1(string1, string2);

    printf("String concatenada: %s\n", string3);

    system("pause");

    return 0;
}

char *concatena1(char *s1, char *s2)
{

    int tamanho = strlen(s1) + strlen(s2) + 1;
    char *s3 = (char *) malloc(tamanho);


    int i;
    for (i=0; i < strlen(s1); i++)
    {
        *(s3+i) = *(s1+i);
    }


    int j;
    for (j=0; j < strlen(s2); j++, i++)
    {
        *(s3+i) = *(s2+j);
    }
    return s3;
}

char *concatena2(char *s1, char *s2)
{

    int tamanho = strlen(s1) + strlen(s2) + 1;
    char *s3 = (char *) malloc(tamanho);

    strcpy(s3, s1);
    strcat(s3, s2);

    return s3;
}

