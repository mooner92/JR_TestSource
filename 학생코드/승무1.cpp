#include <stdio.h>

int main()
{
    int c = 0;
    int n, i, j;
    scanf("%d", &n);
    c = (n * n) % 26 + 64;

    // int sum = n * n - 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (c - (j * n) > 64)
                printf("%c ", c - (j * n));
            else
                printf("%c ", (c - (j * n)) + 26);
        }
        printf("\n");

        c--;
        /*
        if (c-((n-1)*n)<=64)
        {
        c+=26;
        }
        */
    }
}
