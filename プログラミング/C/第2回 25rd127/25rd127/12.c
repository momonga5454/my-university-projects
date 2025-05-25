#include<stdio.h>
int main(void) 
{
    int x;
    scanf("%d",&x);
    x=x+500;

    printf("%d\n",x/1000*1000);
    return 0;

}