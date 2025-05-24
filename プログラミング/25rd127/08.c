#include<stdio.h>
int main(void)
{
    int m,i,a,j,num;
    scanf("%d",&m);

    printf("Input a positive integer: %d\n",m);
    for(j=1;j<=m;j++){
        printf("%d:",j);
        num=0;
        for(i=1;i<=j;i++){
            a=j%i;
            if(a==0){
                printf(" %d",i);
                num+=1;
            }
        }
        printf(", num=%d\n",num);   
    }
    return 0;
}