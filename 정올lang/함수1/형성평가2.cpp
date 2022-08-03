#include <stdio.h>
void addition(int n, int *sum)
{
    for (int i = 1; i <= n; i++)
    {
        *sum += i;
    }
}
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    addition(n, &sum);
    printf("%d", sum);
}