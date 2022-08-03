#include <stdio.h>

int ansreturn(int n, char c, int m)
{
    if (c == '+')
        return n + m;
    else if (c == '-')
        return n - m;
    else if (c == '/')
        return n / m;
    else if (c == '*')
        return n * m;
    else
        return 0;
}
int main()
{
    int n, m;
    char c;
    scanf("%d %c %d", &n, &c, &m);
    printf("%d", ansreturn(n, c, m));
}