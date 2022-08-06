#include <stdio.h>
#include <string.h>
int main()
{
    char s[101] = "";
    int n;
    scanf("%s %d", s, &n);
    for (int i = strlen(s); i >= strlen(s) - n; i--)
    {
        printf("%c", s[i]);
    }
}