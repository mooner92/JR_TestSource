#include <stdio.h>
#include <string.h>
void prt(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("~!@#$^&*()_+|\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    prt(n);
}