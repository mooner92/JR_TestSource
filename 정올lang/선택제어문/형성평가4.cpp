#include <stdio.h>
int main()
{
    int n;
    printf("Number? ");
    scanf("%d", &n);
    if (n == 1)
        printf("dog");
    else if (n == 2)
        printf("cat");
    else if (n == 3)
        printf("chick");
    else
        printf("i don't know");
}