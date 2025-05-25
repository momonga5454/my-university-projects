#include<stdio.h>
int main(void)
{
    
    int ren;
    scanf("%d",&ren);
    if(ren>=0){
        printf("non-negative");
    }
    else if(ren<0){
        printf("negative");
    }
    return 0;

}