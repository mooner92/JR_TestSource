#include <stdio.h>
void digitsquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", i * n + j);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    digitsquare(n);
}