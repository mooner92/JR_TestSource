#include <stdio.h>

int versus_int(int a, int b)
{
    if ((a > b) && (-b > -a))
        return b;
    else if ((a < b) && (-b < -a))
        return a;
    else
        return 0;
}

double versus_double(double a, double b)
{
    if ((a > b) && (-b > -a))
        return a;
    else if ((a < b) && (-b < -a))
        return b;
    else
        return 0;
}

int main()
{
    int n, m;
    double q, w;
    scanf("%d %d", &n, &m);
    printf("%d\n", versus_int(n, m));
    scanf("%lf %lf", &q, &w);
    printf("%.2lf\n", versus_double(q, w));
}