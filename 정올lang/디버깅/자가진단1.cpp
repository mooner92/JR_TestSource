#include <stdio.h>
int main()
{
    double n, m;
    scanf("%lf %lf", &n, &m);
    int fm = n * m;  //int에 double을 저장하면 ceilround(내림)하여 저장됨
    int lm = (int)n * (int)m;  //(int)형으로 변환된 변수들로 계산해줌
    printf("%d %d", fm, lm);
}