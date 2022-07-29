#include <stdio.h>
int main()
{
    int ds[1000] = {0};
    int i = 0;
    while (true)
    {
        scanf("%d", &i);
        if (i == 0)
            break;
        ds[i / 10]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (ds[i] > 0)
            printf("%d : %d\n", i, ds[i]);
    }
}