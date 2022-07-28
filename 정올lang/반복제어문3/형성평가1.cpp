#include <stdio.h>
int main()
{
    int n, sum = 0, cnt = 0;
    while (true)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        sum += n;
        cnt++;
    }
    printf("%d %d", sum, sum / cnt);
}