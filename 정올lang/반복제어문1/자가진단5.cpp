#include <stdio.h>
int main()
{
    int n;
    while (true)
    {
        scanf("%d", &n);
        if (n % 3 != 0)
            continue;
        else if (n == -1)
            break;
        else
            printf("%d\n", n / 3);
    }
}