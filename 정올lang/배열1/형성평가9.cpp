#include <stdio.h>
int main()
{
    int ds[101] = {0};
    int cnt = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &ds[i]);
        if (ds[i] == 0)
            break;
        cnt++;
    }
    for (int i = 0; i < cnt; i++)
    {
        if (ds[i] % 2 == 0)
            printf("%d ", ds[i] / 2);
        else
            printf("%d ", ds[i] * 2);
    }
}