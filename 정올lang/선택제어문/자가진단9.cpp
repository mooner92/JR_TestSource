#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans = (a < b) ? a : b;
    ans = (ans < c) ? ans : c;
    // int ans1 = (a < b) ? a : (b < c) ? b : c;
    printf("%d", ans);
}