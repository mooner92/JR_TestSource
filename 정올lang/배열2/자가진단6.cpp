#include <stdio.h>
int main()
{
    int scores[5][4] = {0};
    int success = 0;
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {

            scanf("%d", &scores[i][j]);
            sum += scores[i][j];
        }
        if (sum / 4 >= 80)
        {
            printf("pass\n");
            success++;
        }
        else
            printf("fail\n");
    }
    printf("Successful : %d", success);
}