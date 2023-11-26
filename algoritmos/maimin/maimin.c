#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

char carac;

printf("Digite o caractere: ");
scanf("%c", &carac);

if (carac >= 'A' && carac <= 'Z') {

    printf("É uma letra maiúscula\n");
} else {
  printf("É uma letra minúscula\n");

}

system("pause");
return 0;


}
