#include <stdio.h>
int main()
{
    int n;
    char str[100][100];
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%s", str[i]);
    }

    for (int i = n; i > 0; i--)
    {
        fprintf(stdout, "%s", str[i]);
    }
}