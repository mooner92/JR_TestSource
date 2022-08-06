#include <stdio.h>
#include <string.h>
int main()
{
    char s[100] = "";
    scanf("%s", s);
    int p = strlen(s);
    strcat(s, s);
    for (int j = strlen(s); j > p; j--)
    {
        for (int i = p; i < j; i++)
        {
            printf("%c", s[i]);
        }
        printf("\n");
    }
}