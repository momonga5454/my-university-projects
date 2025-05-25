#include<stdio.h>
int main(void)
{
    int num,i=1;
    scanf("%d",&num);
    while(i<=100){
        if(i%num==0){
            printf("%d\n",i);
        }
        i++;
    }


    return 0;
}