#include <stdio.h>
int main()
{
    double n, m;
    char c;
    scanf("%lf %lf %c", &n, &m, &c);
    printf("%.2lf\n%.2lf\n%c", n, m, c);
}