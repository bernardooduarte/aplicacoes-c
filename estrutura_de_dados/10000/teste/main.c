#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, *p, x;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    x--;
    (*p) += x;
    printf ("\nx = %d\n", x);
    printf ("\ny = %d\n", y);
}
