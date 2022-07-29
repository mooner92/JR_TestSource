#include <stdio.h>
int main()
{
    char cs[11] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &cs[i]);
    }
    for (int i = 0; i <= 6; i += 3)
    {
        printf("%c ", cs[i]);
    }
}