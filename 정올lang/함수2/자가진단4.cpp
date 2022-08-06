#include <stdio.h>
#include <math.h>

double radius(int n)
{
    return sqrt(n / 3.14);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.2lf", radius(n));
}