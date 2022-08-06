#include <stdio.h>
#include <string.h>
int main()
{
    char s[101] = "";
    char s1[101] = "";
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s1[i] = s[i] - 32;
        }
        else if (s[i] >= 65 && s[i] <= 90)
        {
            s1[i] = s[i];
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s1[i]);
    }
}