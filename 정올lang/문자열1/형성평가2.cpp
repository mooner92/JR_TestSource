#include <stdio.h>
int main()
{
    char s[101] = "";
    scanf("%s", s);
    for (int i = 0; i < 5; i++)
    {
        printf("%c", s[i]);
    }
}