#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    if (m <= 7)
    {
        if (m % 2 == 1)
            printf("31");
        else
        {
            if (m == 2)
                printf("28");
            else
                printf("30");
        }
    }
    else
    {
        if (m % 2 == 0)
            printf("31");
        else
            printf("30");
    }
}