#include <stdio.h>
int main()
{
    int n, p = 65; // ASCII 65 = 'A'
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf("%c", p);
            p++;
        }
        printf("\n");
    }
}