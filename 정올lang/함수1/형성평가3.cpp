#include <stdio.h>
void square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    square(n);
}