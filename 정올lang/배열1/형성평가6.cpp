#include <stdio.h>
int main()
{
    char cs[7] = {'J', 'U', 'N', 'G', 'O', 'L'};
    char c;
    int idx = 0;
    scanf("%c", &c);
    for (int i = 0; i < 6; i++)
    {
        if (c == cs[i])
            break;
        idx++;
    }
    if (idx == 6)
        printf("none");
    else
        printf("%d", idx);
}