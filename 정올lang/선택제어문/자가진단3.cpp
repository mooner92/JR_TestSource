#include <stdio.h>
int main()
{
    int old;
    scanf("%d", &old);
    if (old >= 20)
        printf("adult");
    else
        printf("%d years later", 20 - old);
}