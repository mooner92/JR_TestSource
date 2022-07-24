#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1, sum = 0;
    int odds = 0, oddt = 0;
    while (true)
    {
        sum += i;
        if (sum >= n)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 != 0)
                {
                    odds++;
                    oddt += j;
                }
            }
            break;
        }
        i += 2;
    }
    printf("%d %d", odds, oddt);
}