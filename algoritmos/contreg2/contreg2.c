#include <stdio.h>
#include <locale.h>

void contReg(int num);

main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Insira o n�mero positivo para a contagem regressiva: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("N�mero positivo inv�lido\n");
        system("pause");
        return 0;
    }
    contReg(num);

    printf("\n");

    system("pause");
    return 0;

}

void contReg(int num)
{
    int contador = 0;

    while(contador <= num)
    {
        printf("%d ", contador);
        contador++;
    }
}
