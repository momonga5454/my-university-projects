#include<stdio.h>
int main(void)
{
    int m,i,a,j,num=0;
    scanf("%d",&m);
    for(j=0;j<=m;j++){
        for(i=0;i<=j;i++){
            if(i+j<=m){
                printf("(%d,%d)\n",j,i);
                num+=1;
            }
        }      
    }
    printf("%d\n",num);
    return 0;
}