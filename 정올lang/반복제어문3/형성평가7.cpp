#include <stdio.h>
int main()
{
    int n, ct = 65, t = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%c ", ct + j);
            ct++;
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d ", t);
            t++;
        }
        printf("\n");
    }
}