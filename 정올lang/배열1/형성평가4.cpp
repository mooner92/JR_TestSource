#include <stdio.h>
int main()
{
    int ds[101] = {0};
    int cnt = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &ds[i]);
        if (ds[i] == -1)
            break;
        cnt++;
    }
    if (cnt < 3)
    {
        for (int i = 0; i < cnt; i++)
        {
            printf("%d ", ds[i]);
        }
    }
    else
    {
        for (int i = cnt - 3; i < cnt; i++)
            printf("%d ", ds[i]);
    }
}