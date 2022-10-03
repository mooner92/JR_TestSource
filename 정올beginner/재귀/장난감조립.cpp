#include <stdio.h>
//#pragma warning(disable : 4996)
int ITEM[111][111];
int BASIC[111];
int N, M;
void make(int n)
{
    if (BASIC[n] != -1)
        /*
        중간부품에 대한 BASIC값은 종료될 때 까지 -1로 고정됨
        기본부품들은 전역변수로 선언된 BASIC배열에 의해 초기값이 0이므로
        호출될 때 마다 1씩 더해줌으로써 이 제품이 호출된 횟수를 DFS할 수 있음
        */
        BASIC[n]++;     
    else
    {
        for (int i = 1; i < N; ++i)
        {
            if (ITEM[n][i] != 0)  
            /*
            n번제품을 만드는 데 필요한 i번째 제품의 개수가 0이 아니라면
            (n번제품을 i번째 제품으로 만들 수 있는 것이라면)
            */
            {
                for (int j = 1; j <= ITEM[n][i]; ++j)  
                    /*
                    7,5,2에 대한 처리라면
                    ITEM[7][5] = 2 이므로
                    j를 해당 값인 2만큼 반복해주는 것
                    ---------------------------------------------------------------------------------
                    ex:) 7번 부품을 5번부품 두 개로 만든다면 ITEM[7][5]에 해당하는 값 만큼 
                    make()를 실행하여 BASIC의 5번부품 값을 올려주는 과정을 2번만큼 반복해줌

                    */
                    make(i);
            }
        }
    }
}
//
int main()
{
    scanf("%d%d", &N, &M);
    for (int i = 1; i <= M; ++i)
    {
        int l, m, n;
        scanf("%d%d%d", &l, &m, &n);
        ITEM[l][m] = n;
        BASIC[l] = -1;  //중간부품이라면 -1로 바꾸어 방문을 확인
    }
    make(N);
    for (int i = 1; i < N; ++i)
    {
        if (BASIC[i] != -1)  //중간부품이 아니면 출력
            printf("%d %d\n", i, BASIC[i]);
    }
    return 0;
}
