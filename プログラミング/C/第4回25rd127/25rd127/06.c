#include<stdio.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);

    for(i=2;i<=n;i*=2){
        printf("%d\n",i);   
    }
    return 0;
}