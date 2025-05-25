#include<stdio.h>
int main(void)
{
    
    int ren,a;
    scanf("%d",&ren);
    a=ren % 3;
    if(a==0){
        printf("a multiple of 3\n");
    }
    else if(a!=0){
        printf("not a multiple of 3\n");
    }

    return 0;

}