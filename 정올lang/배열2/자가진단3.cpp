#include <stdio.h>
int main()
{
    int n, m;
    int ds[1000] = {0};
    ds[0] = 100;
    scanf("%d", &ds[1]);
    int i = 2;
    while (true)
    {
        ds[i] = ds[i - 2] - ds[i - 1];
        if (ds[i] < 0)
            break;
        i++;
    }
    for (int i = 0; i < 1000; i++)
    {
        printf("%d ", ds[i]);
        if (ds[i] < 0)
            break;
    }
}