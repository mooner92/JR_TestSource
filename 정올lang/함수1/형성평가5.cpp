#include <stdio.h>
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int a[4][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        a[i][3] = sum(a[i][0], a[i][1], a[i][2]);
    }
    for (i = 0; i < 4; i++)
    {
        a[3][i] = sum(a[0][i], a[1][i], a[2][i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

/*
#include <stdio.h>
void ans()
{
    int tmp[4][4] = {0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &tmp[i][0], &tmp[i][1], &tmp[i][2]); //이중배열을 사용한 풀이
        tmp[i][3] = tmp[i][0] + tmp[i][1] + tmp[i][2];
        for (int j = 0; j < 4; j++)
            printf("%d ", tmp[i][j]);
        printf("\n");
    }
    printf("\n");
}
int main()
{
    ans();
}
*/