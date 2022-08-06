#include <stdio.h>
int main()
{
    int n = 1;
    while (n != 0)
    {
        printf("ASCII code =? ");
        scanf("%d", &n);
        printf("%c\n", n);
    }
}