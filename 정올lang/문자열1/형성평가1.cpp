#include <stdio.h>
#include <math.h>
int main()
{
    char s, c;
    scanf("%c %c", &s, &c);
    printf("%d %d", s + c, abs(s - c));
}