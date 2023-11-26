#include <stdio.h>
#include <locale.h>

int contReg(int num);

main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Insira o número: ");
    scanf("%d", &num);

    contReg(num);

    system("pause");
    return 0;
}

int contReg(int num){
int i = 0;

while(i <= num){
        printf("%d ", i);
        i++;
}
}
