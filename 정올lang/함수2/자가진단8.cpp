#include <stdio.h>
#define def1(x) (x) * (x)
#define def2(x) (x) * (x) * (x)
int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("(%d - %d) ^ 2 = %d\n", num1, num2, def1(num1 - num2));
    printf("(%d + %d) ^ 3 = %d", num1, num2, def2(num1 + num2));
    return 0;
}
