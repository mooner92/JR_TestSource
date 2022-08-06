#include <stdio.h>
#include <math.h>

int ret(double n, double m)
{
    int ans = 0;
    int tmp = 0;
    n = sqrt(abs(n));
    m = sqrt(abs(m));
    int a, b;
    (n > m) ? a = floor(n), b = ceil(m) : a = floor(m), b = ceil(n);
    for (int i = b; i <= a; i++)
    {
        ans++;
    }
    return ans;
}
int main()
{
    double n, m;
    scanf("%lf %lf", &n, &m);
    printf("%d", ret(n, m));
}