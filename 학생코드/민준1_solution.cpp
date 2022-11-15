#include <stdio.h>
int main()
{
    int ds[101] = {
        0,
    };
    int n, cnt = 0, k;
    char c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &c);
        if (c == 'i')
        {
            scanf("%d", &k);
            ds[++cnt] = k;
        }
        else if (c == 'o')
        {
            if (cnt == 0)
                printf("empty\n");
            else
            {
                printf("%d\n", ds[cnt--]);
                // cnt--;
            }
        }
        else
        {
            printf("%d\n", cnt);
        }
    }
} /////////////