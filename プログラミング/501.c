#include<stdio.h>
int main(void)
{
    int test[5];
    int i,j,k=0;
    for(i=0;i<5;i++){
        scanf("%d",&test[i]);
        printf("%d教科目%d点\n",i+1,test[i]);
    }
    for(j=0;j<5;j++){
        k+=test[j];
    }
    printf("合計%d点\n",k);
    return 0;
}