#include <stdio.h>
int main()
{
    int n;
    int *p = &n;
    scanf("%d", &n);
    printf("%d...%d", *p / 10, *p % 10);
}