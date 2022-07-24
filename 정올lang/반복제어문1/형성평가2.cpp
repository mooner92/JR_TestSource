#include <stdio.h>
int main()
{
    int n;
    int odd = 0, even = 0;
    while (true)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        if (n % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("odd : %d\neven : %d", odd, even);
}