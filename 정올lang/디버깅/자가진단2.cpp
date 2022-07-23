#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ans1 = n / m;  //정수형 값들을 나눈 몫
    double ans2 = (double)n / m;  //n을 double로 형변환하여 m으로 나눈 값
    printf("%d %.2lf", ans1, ans2);  //%.2lf로 둘째자리까지 출력
}