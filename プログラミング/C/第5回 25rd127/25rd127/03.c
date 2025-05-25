#include<stdio.h>
int main(void)
{
    int n,m,i;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=m+n-1;i++){
        printf("%d\n",i);   
    }
    return 0;
}