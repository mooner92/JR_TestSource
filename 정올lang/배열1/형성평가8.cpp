#include <stdio.h>
int main()
{
    int ds[101] = {0};
    int m = 0, sum = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &ds[i]);
        if (ds[i] == 0)
            break;
        if (ds[i] % 5 == 0)
        {
            sum += ds[i];
            m++;
        }
    }
    printf("Multiples of 5 : %d\nsum : %d\navg : %.1lf", m, sum, (double)sum / m);
}