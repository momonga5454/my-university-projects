#include<stdio.h>
int main(void)
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=100){
        if(i%4==1){
            printf("%d\n",i);
        }
        i++;
    }


    return 0;
}