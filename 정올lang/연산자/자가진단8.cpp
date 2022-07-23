#include <stdio.h>
int main()
{
    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);
    if (n > m && n > l)
        printf("1 ");
    else
        printf("0 ");
    if (n == m && m == l)
        printf("1 ");
    else
        printf("0 ");
}