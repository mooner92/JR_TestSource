#include <stdio.h>
#include <string.h>

int main()
{
    int kcnt = 0, icnt = 0;
    char c[10001] = "";
    scanf("%s", c);
    char s1[4] = "KOI", s2[4] = "IOI";
    char *ptr1 = strstr(c, s1), *ptr2 = strstr(c, s2);
    while (ptr1 != NULL)
    {                                // 검색된 문자열 출력
        ptr1 = strstr(ptr1 + 1, s1); // 리턴된 포인터 +1 계속 검색
        kcnt++;
    }
    while (ptr2 != NULL)
    {                                // 검색된 문자열 출력
        ptr2 = strstr(ptr2 + 1, s2); // 리턴된 포인터 +1 계속 검색
        icnt++;
    }
    printf("%d\n%d", kcnt, icnt);
}