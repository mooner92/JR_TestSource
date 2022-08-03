#include <stdio.h>
int powret(int n, int m)
{
    if (n > m)
        return (n * n) - (m * m);
    else
        return (m * m) - (n * n);
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", powret(n, m));
}