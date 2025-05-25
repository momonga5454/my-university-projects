#include<stdio.h>
int main(void)
{
    int n,i,s;
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++){
        s+=i*i;
  
    }
    printf("%d\n",s);
    return 0;
}