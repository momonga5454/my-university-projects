#include<stdio.h>
int main(void)
{
    int a,n,i,j,k;
    for(a=0;n<=0;a++){
        printf("Input a positive integer: ");
        scanf("%d",&n);
        if(n>0){
            break;
        }
    }
    for(i=0;i<=n;i++){
        for(j=1;j<=(4*i)+1;j++){
            printf(" ");
            if(j==4*i+1){
                printf("*");
            }
        }
        for(k=(8*n)-(8*i)-1;k>0;k--){
            printf(" ");
            if(k==1){
                printf("*\n");
            }
            
            
        } 
    }  
    printf("\n");
    return 0;

}