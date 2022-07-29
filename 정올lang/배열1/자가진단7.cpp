#include <stdio.h>
int main()
{
    int ds[11] = {0};
    int min = 10001, max = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ds[i]);
        if (ds[i] >= 100 && ds[i] < min)
            min = ds[i];
        else if (ds[i] < 100 && ds[i] > max)
            max = ds[i];
    }
    printf("%d %d", max, min);
}