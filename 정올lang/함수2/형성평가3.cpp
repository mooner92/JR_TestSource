#include <stdio.h>
#include <math.h>

int ans()
{
    int n, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        sum += abs(n);
    }
    return sum;
}
int main()
{
    printf("%d", ans());
}