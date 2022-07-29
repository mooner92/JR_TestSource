#include <stdio.h>
int main()
{
    int ds1[2][4] = {0}, ds2[2][4] = {0}, ds3[2][4] = {0};
    printf("first array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &ds1[i][j]);
        }
    }
    printf("second array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &ds2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ds1[i][j] = ds1[i][j] * ds2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", ds1[i][j]);
        }
        printf("\n");
    }
}