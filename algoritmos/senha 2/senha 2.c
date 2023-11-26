#include <stdio.h>
#include <locale.h>
#include <string.h>

void validarSenha();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    validarSenha();
    system("pause");
    return 0;
}

void validarSenha()
{
    char senha[100];
    printf("Insira a senha: ");
    scanf("%s", senha);
    if (strcmp(senha, "ALGORITMO") == 0)
    {
        printf("Senha correta!\n\n");
    }
    else
    {
        printf("Senha incorreta!\n\n");
    }
}
