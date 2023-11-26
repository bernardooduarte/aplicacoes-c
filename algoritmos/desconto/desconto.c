#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    float preco, desconto;

    printf("Quanto custa o produto:");
    scanf("%f", &preco);

    desconto = preco - (preco * 10/100);

    if(preco > 100.00)
    {

        printf("Com 10%% de desconto, o produto custará R$%.2f\n", desconto);
    }
    else
    {
        printf("O produto custa R$%.2f\n", preco);
    }

    system("pause");

    return 0;


}
