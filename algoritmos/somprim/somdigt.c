#include <stdio.h>
#include <locale.h>

void somDigt(int dig1, int dig2);

main(){

setlocale(LC_ALL, "Portuguese");

int dig1, dig2;

printf("Insira os dois digitos do número inteiro positivo: ");
scanf("%d %d", &dig1, &dig2);

if(dig1 < 0 || dig2 < 0){
    return 0;
}

somDigt(dig1, dig2);

system("pause");

return 0;

}

void somDigt(int dig1, int dig2){

int formula = dig1 + dig2;

printf("\nA soma dá: %d\n", formula);
}
