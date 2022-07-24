#include <stdio.h>
int main()
{
    char c = 'Y';
    double base, height;
    while (c == 'Y' || c == 'y')
    {
        printf("Base = ");
        scanf("%lf", &base);
        printf("Height = ");
        scanf("%lf", &height);
        printf("Triangle width = %.1lf\n", base * height / 2);
        printf("Continue? ");
        scanf(" %c", &c); //문자를 입력받을 때에는 %c 앞에 공백을 넣어 주어야 엔터, 공백과 같은 구분자를 입력받지 않고 한 개의 문자를 입력받을 수 있다.
    }
}