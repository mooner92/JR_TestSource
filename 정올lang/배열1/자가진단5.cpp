#include <stdio.h>
int main()
{
    double ds[7] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%.1lf", ds[n - 1] + ds[m - 1]);
}