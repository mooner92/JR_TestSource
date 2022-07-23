#include <stdio.h>
#include <time.h>
int main()
{
    int a = 0;
    time_t now;
    struct tm tt;
    time(&now);
    tt = *localtime(&now);
    a = tt.tm_year;  // a = year
    a += tt.tm_mon;  // a=year+month
    a += tt.tm_mday; // a=year+month+day
    printf("%d %d %d\n", tt.tm_year, tt.tm_year + tt.tm_mon, a);
}