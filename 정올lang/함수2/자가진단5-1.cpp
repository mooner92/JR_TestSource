#include <stdio.h>
#include <math.h>

void ret(double ds[])
{
    double tmp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (ds[i] < ds[j])
            {
                tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
        }
    }
    printf("%.0f %.0f %.0f", ceil(ds[0]), floor(ds[2]), round(ds[1]));
}

int main()
{
    double ds[3] = {0};
    scanf("%lf %lf %lf", &ds[0], &ds[1], &ds[2]);
    ret(ds);
}
