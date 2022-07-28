#include <stdio.h>
int main()
{
    int n, t = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (t >= 10)
                t %= 10;
            printf("%d ", t);
            t += 2;
        }
        printf("\n");
    }
}