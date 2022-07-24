#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = (a < b) ? b - a : a - b;
    printf("%d", ans);
}