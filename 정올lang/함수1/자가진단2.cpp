#include <stdio.h>
void circleprt(int r)
{
    printf("%.2lf", r * r * 3.14);
}
int main()
{
    int n;
    scanf("%d", &n);
    circleprt(n);
}