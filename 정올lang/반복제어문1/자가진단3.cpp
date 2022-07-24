#include <stdio.h>
int main()
{
    int n;
    while (true)
    {
        printf("Number? ");
        scanf("%d", &n);
        if (n == 0)
            break;
        if (n > 0)
            printf("positive integer\n");
        else
            printf("negative integer\n");
    }
}