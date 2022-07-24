#include <stdio.h>
int main()
{
    double d;
    scanf("%lf", &d);
    if (d <= 50.80)
        printf("Flyweight");
    else if (d <= 61.23 && d > 50.80)
        printf("Lightweight");
    else if (d <= 72.57 && d > 61.23)
        printf("Middleweight");
    else if (d <= 88.45 && d > 72.57)
        printf("Cruiserweight");
    else
        printf("Heavyweight");
}