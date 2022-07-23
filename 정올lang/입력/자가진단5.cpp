#include <stdio.h>
#define INCH 2.54
#define YARD 91.44
int main()
{
    double p_yard = 2.1, p_inch = 10.5;
    printf("%4.1fyd = %5.1fcm\n%4.1fin = %5.1fcm", p_yard, p_yard * YARD, p_inch, p_inch * INCH);
}