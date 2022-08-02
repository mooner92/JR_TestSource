#include <stdio.h>

int max(int n, int m, int l)
{
    return (n > m) ? n : (m > l) ? m
                                 : l;
}

int main()
{
    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);
    printf("%d", max(n, m, l));
}
