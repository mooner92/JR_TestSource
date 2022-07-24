#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    int cnt = 0;
    for (int i = (n < m) ? n : m; i <= ((n > m) ? n : m); i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
            cnt++;
        }
    }
    printf("sum : %d\navg : %.1lf", sum, (double)sum / cnt);
}