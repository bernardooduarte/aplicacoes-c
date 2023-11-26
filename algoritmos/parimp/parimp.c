#include <stdio.h>
#include <locale.h>

void parImp(int num);
main(){

int num;

setlocale(LC_ALL, "Portuguese");

printf("Insira o número: ");
scanf("%d", &num);

parImp(num);

system("pause");

return 0;

}

void parImp(int num){
if (num % 2 == 0){
    printf("É par\n");
} else {
    printf("É ímpar");
}
}
