/******************************************************************************
정수 N을 입력받고 다시 N개의 정수를 입력받아 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
(1 ≤ N ≤ 15, 입력과 출력, 정렬은 모두 함수를 이용할 것)
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    int i;

    int j;
    int k;
    int tmp;
    
    int score[100];
        scanf("%d",&a);
    for(i=0;i<a;i++){
    scanf("%d",&j);        
    score[i]=j;
    }


    if(!(1<= a && a<=15)){
        return 0;
    }
    for(i=0;i<a-1;i++){
        int min=score[i+1];
        int idx;
        for(k=i+1;k<a;k++){
            if(min<score[k]){
                min=score[k];
                idx=k;
            }
        
        }           
        if(min>score[i]){
            tmp=score[i];
            score[i]=score[idx];
            score[idx]=tmp;
        }


    }
    
    //printf("%d\n",score[a]);
            for(int q=0;q<a;q++){
    printf("%d ",score[q]);

    }
    //printf("\n");
    return 0;
}
