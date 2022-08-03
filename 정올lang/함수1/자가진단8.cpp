#include <stdio.h>
void gugu(int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        printf("== %ddan ==\n", i);
        for (int j = 1; j <= 9; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    gugu(n, m);
}