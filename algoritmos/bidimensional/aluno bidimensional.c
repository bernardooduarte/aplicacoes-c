#include <stdio.h>

int main()
{
    int num[5][5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i > j)
            {
                num[i][j] = 1;
            }
            else if (i == j)
            {
                num[i][j] = 0;
            }
            else
            {
                num[i][j] = -1;
            }
        }
    }


    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
