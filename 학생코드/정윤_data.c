#include <stdio.h>
 
int main(void){
 
int d,h;
printf("삼각형의 밑면과 높이를 입력하세요:");
scanf("%d %d", &d, &h);
printf("넓이: %d x %d = %d", d, h, d*h);
int d,u;
printf("삼각형의 넓이와 밑변을 입력하세요:");
scanf("%d %d", &d, &u);
printf("높이: %d 나누기 %d = %d", u, d, u/d);
int a,b,c;
printf("삼각형의 세변의 길이를 입력하세요:");
scanf("%d %d %d", &a, &b, &c);
printf("둘레: %d+%d+%d = %d",a, b, c, a+b+c);
 
int n,m,r;
printf("원의 지름,원주율,반지름을 입력하세요:");
scanf("%d %d %d", &n, &m, &r);
printf("반지름: %d / 2 = %d\n", n, n\2);
printf("넓이: %d x %d x %d = %d\n",r, r, m, r*r*m);
printf("둘레: %d x %d = %d\n",n,m,n*m);
 
int w,s;
printf("사각형의 가로와 세로의 길이를 입력하세요:");
scanf("%d %d",&w,&s);
printf("둘레: %d+%d+%d+%d = %d",w,s,w,s,w+s+w+s);
printf("넓이: %d x %d = %d", w,s,w*s);
 
int j,e,f;
printf("직육면체의 가로,세로,높이를 입력하세요:");
scanf("%d %d %d",&j,&e,&f);
printf("부피: %d x %d x %d = %d",j,e,f,j*e*f);
int i,k,t
printf("직육면체의 세 면의 넓이를 입력하세요:");
scanf("%d %d %d",&i,&k,&t);
printf("부피: (%d+%d+%d) x 2 = %d",i,k,t,(j+e+f)*2);
int g,z;
printf("정육면체의 가로와 세로를 입력하세요:");
scanf("%d %d", &g,&z);
printf("%d x %d x 6 = %d",g,z,g*z*6);
int x,l,p,o,q;
printf("원기둥의 한 밑면의 넓이,옆면의 넓이,원주율,반지름과 높이를 입력하세요:");
scanf("%d %d %d %d %d",&x,&l,&p,&o,&q);
printf("겉넓이: %d x 2 + %d = %d",x,l,x*2+l);
printf("부피: %d x %d x %d x %d = %d", p,o,o,q,p*o*o*q);
 
 
	return 0;
}