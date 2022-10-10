#include <stdio.h>
#include <string.h>
int main(void){
char dict[5][3][500]={
{{"넓이 : 밑변과 높이를 곱하고 2로 나눈다."},{"높이 : 밑면과 수직을 이룰떄,또는 연장선을 그어 수직으로 꼭짓점 하나와 수직을 이룰때의 수선"},{"둘레 : 삼각형의 모든 변을 더한 값"}},
{{"반지름 : 원의 중심을 지나가는 직선, 즉 지름을 2로 나눈다."},{"넒이 : 반지름을 2번 곱하고 원주율을 곱하다."},{"둘레 : 지름과 원주율을 곱한다."}},
{{"둘레 : 사각형의 모든 변을 더한 값이다."},{"넓이 : 가로와 세로를 곱한다. "},{""}},
{{"부피 : 가로,세로,높이를 곱한다."},{"겉넓이 : 모든 면의 넓이를 더한 값"},{""}},
{{"겉넓이 : 한 밑면의 넓이와 2를 곱하고 옆면의 넓이를 더한다. "},{"부피 : 원주율,반지름,반지름,높이를 모두 곱한다."},{""}}
};
char shape[10];
	scanf("%s",shape);
	//scanf("%d %d", &d, &h);
	int i;
	
	if(strcmp(shape,"삼각형")==0){
	    for(i=0;i<3;i++){
	    printf("%s\n",dict[0][i]);
    }
    int d,h;
    printf("삼각형의 밑면과 높이를 입력하세요:");
    scanf("%d %d", &d, &h);
    printf("넓이: %d x %d = %d", d, h, d*h);
    int t,u;
    printf("삼각형의 넓이와 밑변을 입력하세요:");
    scanf("%d %d", &t, &u);
    printf("높이: %d 나누기 %d = %d", u, t, u/t);
    int a,b,c;
    printf("삼각형의 세변의 길이를 입력하세요:");
    scanf("%d %d %d", &a, &b, &c);
    printf("둘레: %d+%d+%d = %d",a, b, c, a+b+c);
    }

	else if(strcmp(shape,"원")==0){
        for(i=0;i<3;i++){
	    printf("%s\n",dict[1][i]);
	}
    int n,m,r;
    printf("원의 지름,원주율,반지름을 입력하세요:");
    scanf("%d %d %d", &n, &m, &r);
    printf("반지름: %d / 2 = %d\n", n, n/2);
    printf("넓이: %d x %d x %d = %d\n",r, r, m, r*r*m);
    printf("둘레: %d x %d = %d\n",n,m,n*m);
    }
	
	else if(strcmp(shape,"사각형")==0){
	for(i=0;i<3;i++){
	printf("%s\n",dict[2][i]);
	}
    int w,s;
    printf("사각형의 가로와 세로의 길이를 입력하세요:");
    scanf("%d %d",&w,&s);
    printf("둘레: %d+%d+%d+%d = %d",w,s,w,s,w+s+w+s);
    printf("넓이: %d x %d = %d", w,s,w*s);
    }
	else if(strcmp(shape,"직육면체")==0){
	for(i=0;i<3;i++){
	printf("%s\n",dict[3][i]);
	}
    int j,e,f;
    printf("직육면체의 가로,세로,높이를 입력하세요:");
    scanf("%d %d %d",&j,&e,&f);
    printf("부피: %d x %d x %d = %d",j,e,f,j*e*f);
    int i, k, t;
    printf("직육면체의 세 면의 넓이를 입력하세요:");
    scanf("%d %d %d",&i,&k,&t);
    printf("부피: (%d+%d+%d) x 2 = %d",i,k,t,(j+e+f)*2);
    }
	else if(strcmp(shape,"정육면체")==0){
	for(i=0;i<3;i++){
	printf("%s\n",dict[3][i]);
	}
    int g,z;
    printf("정육면체의 가로와 세로를 입력하세요:");
    scanf("%d %d", &g,&z);
    printf("%d x %d x 6 = %d",g,z,g*z*6);
    }
	else if(strcmp(shape,"원기둥")==0){
	for(i=0;i<3;i++){
	printf("%s\n",dict[4][i]);
	}
    int x,l,p,o,q;
    printf("원기둥의 한 밑면의 넓이,옆면의 넓이,원주율,반지름과 높이를 입력하세요:");
    scanf("%d %d %d %d %d",&x,&l,&p,&o,&q);
    printf("겉넓이: %d x 2 + %d = %d",x,l,x*2+l);
    printf("부피: %d x %d x %d x %d = %d", p,o,o,q,p*o*o*q);
    }
	else{
	printf("사전에 등록 되지 않은 도형입니다.");
	}
	
	return 0;
}//