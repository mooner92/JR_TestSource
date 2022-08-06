#include <stdio.h>

int main()
{
    int a[10];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (a[j] < a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        for (j = 0; j < 10; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}