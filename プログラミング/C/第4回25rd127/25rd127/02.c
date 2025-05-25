#include<stdio.h>
int main(void)
{
    int res,i;
    
    scanf("%d",&res);
    
    for(i=1;i<=100;i++){
        if(i%res==0){
            printf("%d\n",i);
        }
    }
    

    return 0;
}