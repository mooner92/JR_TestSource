#include <stdio.h>
int main()
{
    int n;

    int *p = &n;
    scanf("%d", p);
    printf("%#p %d", p, *p);
}