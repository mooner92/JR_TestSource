#include <stdio.h>
int main()
{
    char n;
    while (true)
    {
        scanf(" %c", &n); //문자 하나만 입력받을땐 공백 꼭 써주기
        if (n >= 65 && n <= 90)
        {
            printf("%c\n", n);
        }
        else if (n >= 48 && n <= 57)
        {
            printf("%d\n", n);
        }
        else
        {
            break;
        }
    }
}