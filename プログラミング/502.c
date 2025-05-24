#include<stdio.h>
#define NUM 5
int main(void)
{
    int test[NUM];
    int i,j,k=0;
    for(i=0;i<NUM;i++){
        scanf("%d",&test[i]);
        printf("%d教科目%d点\n",i+1,test[i]);
    }
    for(j=0;j<NUM;j++){
        k+=test[j];
    }
    printf("合計%d点\n",k);
    return 0;
}