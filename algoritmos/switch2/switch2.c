#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Digite a letra: ");
    scanf("%c", &letra);

    switch(letra)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("� uma vogal\n");
        break;
    default:
        printf("� uma consoante\n");
        break;
    }

    system("pause");
    return 0;






}
