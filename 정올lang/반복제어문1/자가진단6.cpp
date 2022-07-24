#include <stdio.h>
int main()
{
    int n;
    printf("1. Korea\n2. USA\n3. Japan\n4. China\nNumber? ");
    scanf("%d", &n);
    if (n == 1)
        printf("Seoul");
    else if (n == 2)
        printf("Wasington");
    else if (n == 3)
        printf("Tokyo");
    else
        printf("Beijing");
}