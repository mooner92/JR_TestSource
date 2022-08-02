#include <stdio.h>

int pow(int n, int m)
{
    int sum = 1;
    for (int i = 0; i < m; i++)
    {
        sum *= n;
    }
    return sum;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", pow(n, m));
}