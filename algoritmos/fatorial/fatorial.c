#include <stdio.h>
#include <locale.h>

int fatorial(int num);

main()
{
    int num;

    setlocale(LC_ALL, "Portuguese");

    printf("Insira o número para fatorar: ");
    scanf("%d", &num);

    if(num < 0)
    {
        return 0;
    }

    printf("O resultado é: %d", fatorial(num));

    return 0;

}

int fatorial(int num)
{
    int i = 1;
    int formula = 1;

    while(i <= num)
    {
        formula = formula * i;
        i++;
    }
    return formula;
}
