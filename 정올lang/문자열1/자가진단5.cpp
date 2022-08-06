#include <stdio.h>
#include <string.h>

int main()
{
    char s1[21] = "", s2[21] = "";
    scanf("%s %s", s1, s2);
    printf("%lu", strlen(s1) + strlen(s2));
}