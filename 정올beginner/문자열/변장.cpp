#include <stdio.h>
#include <string.h>

int main()
{
    int tc, n;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int cnts[31] = {0};
        char str[31][21];
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%*s %s", str[j]); //%*s는 문자열을 저장하지 않고 무시하라는 뜻 -> %*d %*lf등등
        }
    }
}