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
    for (int i = cnt - 1; i >= 0; i--)
    {
        printf("%d ", ds[i]);
    }
}