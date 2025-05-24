#include<stdio.h>
int max(int x,int y)
{
    if(x>y){
        return x;
    }
    if(y>x){
        return y;
    }
}
int main(void)
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    ans=max(a,b);
    printf("%d\n",ans);
    return 0;
}