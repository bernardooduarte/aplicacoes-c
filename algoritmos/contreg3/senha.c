#include <stdio.h>
#include <locale.h>

struct estrutura{

char senha[100];

};

typedef struct estrutura Dados;

void validarSenha(Dados dados);

main(){

setlocale(LC_ALL, "Portuguese");

Dados dados;

printf("Insira a senha: ");
scanf("%s", dados.senha);

validarSenha(dados);

system("pause");
return 0;

}

void validarSenha(Dados dados){

if(dados.senha == 'senha123'){
    printf("Acesso concedido\n");
} else {
    printf("Acesso negado\n");
    getchar();
}
}
