#include <stdio.h>
int main()
{
    int min = 1001;
    int ds[11] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ds[i]);
        if (ds[i] < min)
            min = ds[i];
    }
    printf("%d", min);
}