#include <stdio.h>
int ans[253][11] = {
    0,
};
// 10C5 = 252개
int n, l, ansp = 0, comp = 0;
bool selected[11];
int s[11] = {
    0,
};
int k[11] = {
    0,
};

void savecom() //본문 풀이할 때는 저장하지 말고 일치하면 그냥 출력하고 return break해주기
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (selected[i] == true)
        {
            ans[ansp][cnt] = k[i]; // EXprint
            // printf("%d ", k[i]);
            cnt++;
        }
    }
    // printf("\n"); // EXprint
}
void DFS(int Idx, int Cnt)
{
    if (Cnt == l)
    {
        savecom();
        ansp++;
        comp++;
        return;
    }

    for (int i = Idx; i < n; i++)
    {
        if (selected[i] == true)
            continue;
        selected[i] = true;

        DFS(i, Cnt + 1);
        selected[i] = false;
    }
}

int retidx() //조합의 전체ans[]와 입력받은 조합 s를 비교하여 그 다음 조합 ans[idx] 의 idx+1 을 반환
{
    int i, p;
    for (i = 0; i < comp; i++)
    {
        p = 0;
        for (int j = 0; j < l; j++)
        {
            if (ans[i][j] == s[j])
                p++;
        }
        if (p == l)
            break;
    }
    return i + 1;
}

void initsize(int n)
{
    for (int i = 0; i < n; i++)
    {
        k[i] = i + 1;
    }
}

int main()
{
    scanf("%d %d", &n, &l);
    initsize(n);
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &s[i]);
    }
    DFS(0, 0);
    int g = retidx();
    if (g == comp)
    {
        printf("NONE");
        return 0;
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d ", ans[g][i]);
    }
} //