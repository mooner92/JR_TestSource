#include <stdio.h>
#include <math.h>

void ret(double q, double w, double e)
{
    double p = (q > w)   ? (q > e) ? q : (e > w) ? e
                                                 : w
               : (w > e) ? w
                         : e;
    printf("%d ", ceil(p));
    double q = (q < w)   ? (q < e) ? q : (e < w) ? e
                                                 : w
               : (w < e) ? w
                         : e;
    printf("%d ", floor(q));
}

int main()
{
    double q, w, e;
    scanf("%lf %lf %lf", &q, &w, &e);
    ret(q, w, e);
}