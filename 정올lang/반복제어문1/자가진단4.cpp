#include <stdio.h>
int main()
{
    int n;
    int ans = 0;
    while (true)
    {
        scanf("%d", &n);
        ans += n;
        if (n >= 100)
            break;
    }
    printf("%d", ans);
}