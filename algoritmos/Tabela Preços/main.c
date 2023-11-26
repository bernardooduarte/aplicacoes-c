#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularValorTotal(int codigo, int qtd);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo, qtd;
    printf("Insira o código e a quantidade do produto desejado: ");
    scanf("%d %d", &codigo, &qtd);

    float resultado = calcularValorTotal(codigo, qtd);

    printf("\nTotal: R$%.2f\n\n", resultado);

    system("pause");

    return 0;

}

float calcularValorTotal(int codigo, int qtd)
{

    float preco;

    switch(codigo)
    {

    case 1:
        preco = 4.00;
        break;
    case 2:
        preco = 4.50;
        break;
    case 3:
        preco = 5.00;
        break;

    case 4:
        preco = 2.00;
        break;

    case 5:
        preco = 1.50;
        break;
    }

    return preco * qtd;
}
