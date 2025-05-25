#include<stdio.h>
int main(void)
{
    int res,i,j,k;
    
    scanf("%d",&res);
    
    for(i=1;i<=res;i++){
        printf("%d",i);
        for(j=1+i;j<=res;j++){
            printf("%d",j);    
        }
        for(k=1;k<=i-1;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    

    return 0;
}