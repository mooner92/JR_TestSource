#include <stdio.h>
int main()
{
    int i, n, c, o, arr[100] = {0}, in, cnt = 0;
    char t[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%c", &t[i]);
        if (t[i] == 'i')
        {
            scanf("%d", &in);
            arr[cnt] = in;
            cnt++;
        }
        else if (t[i] == 'c')
        {
            printf("%d\n", cnt);
        }
        else if (t[i] == 'o')
        {
            if (cnt == 0)
                printf("empty\n");
            else
            {
                printf("%d\n", arr[cnt - 1]);
                cnt--;
            }
        }
    }
}