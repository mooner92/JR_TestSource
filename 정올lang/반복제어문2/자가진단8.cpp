#include <stdio.h>
int main()
{
    for (int i = 2; i < 5; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            printf("%d * %d =  %d   ", i, j, i * j);
        }
        printf("\n");
    }
}