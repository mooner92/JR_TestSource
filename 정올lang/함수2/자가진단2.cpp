#include <stdio.h>
int main()
{
    int m, d;
    scanf("%d %d", &m, &d);
    if (m >= 1 && m <= 12)
    {
        if ((m <= 7 && m % 2 != 0) && (d >= 1 && d <= 31))
        {
            if (m == 2 && d >= 1 && d <= 29)
                printf("OK!");
            else
                printf("BAD!");
        }

        else if ((m >= 8 && m % 2 == 0) && (d >= 1 && d <= 31))
            printf("BAD!");
    }
    else
        printf("BAD!");
}