#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    n += 100;
    m %= 10;
    printf("%d %d", n, m);
}