#include <stdio.h>
int main()
{
    int ds[11] = {0};
    int odd = 0, even = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ds[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            odd += ds[i]; //홀수번째수 = 인덱스는 짝수임
        else
            even += ds[i];
    }
    printf("odd : %d\n", odd);
    printf("even : %d", even);
}