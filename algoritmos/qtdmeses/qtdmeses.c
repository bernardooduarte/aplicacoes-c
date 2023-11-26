#include <stdio.h>
#include <locale.h>

struct estrutura
{

    float apormensal;
    float juros;
    int meses;
    float soma;
};

typedef struct estrutura Dados;

int calcularInvestimento(Dados dados);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    Dados dados;

    printf("Insira o aporte mensal: ");
    scanf("%f", &dados.apormensal);

    printf("Insira os juros mensais: ");
    scanf("%f", &dados.juros);

    printf("Insira a quantidade de meses: ");
    scanf("%d", &dados.meses);

    float resultado = calcularInvestimento(dados);

    printf("O saldo final será: %.2f reais\n", resultado);

    system("pause");

    return 0;
}

int calcularInvestimento(Dados dados)
{
    int contador;

    for(contador = 0; contador < dados.meses; contador++)
    {
        dados.apormensal = dados.apormensal + (dados.apormensal * (dados.juros/100));
    }
    return dados.apormensal;
}
