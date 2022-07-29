#include <stdio.h>
int main()
{
    int ds[27] = {0};
    char c;
    for (int i = 0; i < 100; i++)
    {
        scanf(" %c", &c); //문자단위로 입력받을 때 공백 띄워주는거 잊지말기
        if (c < 65 || c > 90)
            break;
        ds[c - 65]++; // c-65로 해도 가능
    }
    for (int i = 0; i < 26; i++)
    {
        if (ds[i] > 0)
            printf("%c : %d\n", i + 'A', ds[i]);
    }
}