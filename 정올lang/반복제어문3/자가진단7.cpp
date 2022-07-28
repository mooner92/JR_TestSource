#include <stdio.h>
int main()
{
    int n, t = 1, ct = 65;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            printf("%d ", t);
            t++;
        }

        for (int j = 0; j < i; j++)
        {
            printf("%c ", ct);
            ct++;
        }

        printf("\n");
    }
}