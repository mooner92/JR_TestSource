#include <stdio.h>
int main()
{
    double n, m, l;
    scanf("%lf %lf %lf", &n, &m, &l);
    int sum = (int)n + (int)m + (int)l;   //int형으로 형변환하여 값들을 더해줌
    int avg = (int)((n + m + l) / 3);   //실수들의 평균을 구하여 int형으로 형변환해줌
    printf("sum %d\navg %d", sum, avg);
}