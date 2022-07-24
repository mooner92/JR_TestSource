#include <stdio.h>
int main()
{
    int sub, sum = 0;
    scanf("%d", &sub);
    int score;
    for (int i = 0; i < sub; i++)
    {
        scanf("%d", &score);
        sum += score;
    }
    printf("avg : %.1lf\n", (double)sum / sub);
    if ((double)sum / sub >= 80)
        printf("pass");
    else
        printf("fail");
}