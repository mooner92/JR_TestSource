#include <stdio.h>

void bubble_sort(int list[], int n)
{
    int i, j, temp;

    for (i = n - 1; i > 0; i--)
    {
        // 0 ~ (i-1)까지 반복
        for (j = 0; j < i; j++)
        {
            // j번째와 j+1번째의 요소가 크기 순이 아니면 교환
            if (list[j] < list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
        for (int k = 0; k < 10; k++)
            printf("%d ", list[k]);
        printf("\n");
    }
}

int main()
{
    int ds[11] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ds[i]);
    }
    bubble_sort(ds, 10);
}