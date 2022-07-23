#include <stdio.h>
int main()
{
    double n, m, l;
    scanf("%lf %lf %lf", &n, &m, &l);
    int sum = (int)n + (int)m + (int)l;
    int avg = (int)((n + m + l) / 3);
    printf("sum %d\navg %d", sum, avg);
}