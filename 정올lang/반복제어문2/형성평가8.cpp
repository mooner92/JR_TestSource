#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}