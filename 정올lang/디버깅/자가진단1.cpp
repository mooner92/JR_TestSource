#include <stdio.h>
int main()
{
    double n, m;
    scanf("%lf %lf", &n, &m);
    int fm = n * m;
    int lm = (int)n * (int)m;
    printf("%d %d", fm, lm);
}