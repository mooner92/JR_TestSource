#include <stdio.h>
#include <math.h>

void ans()
{
    double ltotal = 0;
    double total = 0;
    double s;
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &s);
        ltotal += round(s);
        total += s;
    }
    printf("%.0lf\n", round(total / 3));
    printf("%.0lf\n", (ltotal / 3));
}
int main()
{
    ans();
}