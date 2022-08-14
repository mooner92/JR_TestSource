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
            //파이썬의 find개념을 사용한 풀이
            int k;
            for (k = 0; k <= j; k++)
            {
                if (strcmp(str[k], str[j]) == 0)
                    break; //처음으로 같은값이 나온 index 지정
            }
            if (k != j)
            {
                cnts[k]++;
            }
            else
                cnts[j]++;
        }
        int ans = 1;
        for (int j = 0; j < 30; j++)
        {
            ans *= (cnts[j] + 1);
        }
        printf("%d\n", ans - 1);
    }
}