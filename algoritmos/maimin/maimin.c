#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

char carac;

printf("Digite o caractere: ");
scanf("%c", &carac);

if (carac >= 'A' && carac <= 'Z') {

    printf("� uma letra mai�scula\n");
} else {
  printf("� uma letra min�scula\n");

}

system("pause");
return 0;


}
