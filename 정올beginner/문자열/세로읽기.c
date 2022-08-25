#include <stdio.h>
int main()
{
    char c[5][16] = {};
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", c[i]);
    }
    int p, q;
    for (int i = 0; i < 75; i++)
    {
        p = i / 5;
        q = i % 5;
        if (!c[q][p])
        {
            continue;
        }
        printf("%c", c[q][p]);
    }
}