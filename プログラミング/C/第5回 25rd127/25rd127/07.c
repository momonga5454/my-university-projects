#include<stdio.h>
int main(void)
{
    int m,i,a,j;
    scanf("%d",&m);
    
    for(j=2;j<=m;j++){

        for(i=2;i<j+1;i++){
            a=j%i;
            if(m==2){
                printf("2\n");
                break;
            }
            else if(i>j){
                break;
            }
            else if(i==j){
                printf("%d\n",j);
                break;
            }
            else if(a==0){
                break;
            }
        
        }
    }
    return 0;
}