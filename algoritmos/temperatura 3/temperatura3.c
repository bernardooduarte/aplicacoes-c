#include <stdio.h>
#include <locale.h>

struct estrutura{

float tempmin;
float tempmax;

};

typedef struct estrutura Dados;

Dados calcularTemperaturaMinima(int MAX, Dados temperaturas[MAX]);
Dados calcularTemperaturaMaxima (int MAX, Dados temperaturas[MAX]);
float calcularTemperaturaMedia (int MAX, Dados temperaturas[MAX]);

int main(){

setlocale(LC_ALL, "Portuguese");

int MAX;

printf("Insira a quantidade de dias do mês: ");
scanf("%d", &MAX);


printf("\n");

Dados temperaturas[MAX];

int i;
for(i = 0; i < MAX; i++){
    printf("Insira a temperatura mínima do dia %d do mês: ", i + 1);
    scanf("%f", &temperaturas[i].tempmin);

    printf("Insira a temperatura máxima do dia %d do mês: ", i + 1);
    scanf("%f", &temperaturas[i].tempmax);

    printf("\n");
}

Dados resultadotempmin = calcularTemperaturaMinima(MAX, temperaturas);
printf("\nTemperatura mínima do mês: %.1f\n", resultadotempmin.tempmin);

Dados resultadotempmax = calcularTemperaturaMaxima(MAX, temperaturas);
printf("Temperatura máxima do mês: %.1f\n", resultadotempmax.tempmax);

printf("Temperatura média do mês: %.1f\n\n", calcularTemperaturaMedia(MAX, temperaturas));

system("pause");
return 0;
}

Dados calcularTemperaturaMinima(int MAX, Dados temperaturas[MAX]){

Dados mintemp = temperaturas[0];

int i;
for(i = 0; i < MAX; i++){
    if(temperaturas[i].tempmin < mintemp.tempmin){
        mintemp = temperaturas[i];
    }
}

return mintemp;
}

Dados calcularTemperaturaMaxima (int MAX, Dados temperaturas[MAX]){

Dados maxtemp = temperaturas[0];

int i;
for(i = 0; i < MAX; i++){
    if(temperaturas[i].tempmax > maxtemp.tempmin){
        maxtemp = temperaturas[i];
    }
}

return maxtemp;
}

float calcularTemperaturaMedia (int MAX, Dados temperaturas[MAX]){

float somarTemps = 0;

int i;
for(i = 0; i < MAX; i++){
 somarTemps += temperaturas[i].tempmin + temperaturas[i].tempmax;
}

return somarTemps / (2*MAX);
}
