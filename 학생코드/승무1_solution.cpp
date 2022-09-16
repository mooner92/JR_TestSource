#include <stdio.h>
int N;
char board[100][100];
int main(void) {
    scanf("%d", &N);
    //첫 칸부터 거꾸로 채워줌
    char ch = 'A';
    for (int y = N - 1; y >= 0; y--) {
        for (int x = N - 1; x >= 0; x--) {
            board[x][y] = ch++;
            if (ch >= 'Z' + 1) ch = 'A';
        }
    }
 
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}