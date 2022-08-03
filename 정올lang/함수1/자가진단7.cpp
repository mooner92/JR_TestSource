#include <stdio.h>
void cal(int *a, int *b)
{
    if (*a > *b)
    {
        *a /= 2;
        *b *= 2;
    }
    else
    {
        *b /= 2;
        *a *= 2;
    }
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    cal(&n, &m);
    printf("%d %d", n, m);
}