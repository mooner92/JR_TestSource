#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ans1 = n / m;
    double ans2 = (double)n / m;
    printf("%d %.2lf", ans1, ans2);
}