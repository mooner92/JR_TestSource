#include <stdio.h>

void scan(int a[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
}

void sort(int a[], int N)
{
    int i, j;
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void print(int a[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int i;
    int a[15];
    scan(a, N);
    sort(a, N);
    print(a, N);
}