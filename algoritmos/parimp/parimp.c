#include <stdio.h>
#include <locale.h>

void parImp(int num);
main(){

int num;

setlocale(LC_ALL, "Portuguese");

printf("Insira o n�mero: ");
scanf("%d", &num);

parImp(num);

system("pause");

return 0;

}

void parImp(int num){
if (num % 2 == 0){
    printf("� par\n");
} else {
    printf("� �mpar");
}
}
