#include <stdio.h>
#include <locale.h>

void umadez();

main()
{
    int num;

    umadez();

    return 0;


}

void umadez()
{
    int contador = 1;
    int num = 10;

    while(contador <= num)
    {
        printf("%d ", contador);
        contador++;
    }
}
