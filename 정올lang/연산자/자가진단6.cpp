#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d %c %d\n%d %c %d\n%d %c%c %d\n%d %c%c %d", n, 60, m, n, 62, m, n, 60, 61, m, n, 62, 61, m);
}