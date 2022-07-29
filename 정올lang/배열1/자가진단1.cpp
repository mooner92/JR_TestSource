#include <stdio.h>
int main()
{
    char cs[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &cs[i]);
    }
    for (int i = 0; i < 10; i++)
        printf("%c", cs[i]);
} //문자를 입력받을 때는 %c 앞에 반드시 공백이 필요함을 잊지 말자.