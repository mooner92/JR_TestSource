#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("# ");
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < n - i - 1; j++) // i를 1로 설정하면 문제 해결 가능
        {
            printf("# ");
        }
        printf("\n");
    }
}