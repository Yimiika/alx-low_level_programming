#include "main.h"
#include <stdio.h>

void times_table(void)
{
    int i, j, res;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            res = i * j;
            if (j == 0)
            {
                printf("%d", res);
            }
            else
            {
                printf(",%3d", res);
            }
        }
        printf("\n");
    }
}
