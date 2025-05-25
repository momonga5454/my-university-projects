#include<stdio.h>
int max(int s,int t,int u,int v,int w){
    int z;
    if(s>t && s>u && s>v && s>w){
        return s;
    }
    else if(s==t && s==u && s==v && s==w){
        return s;
    }  
}
int max2(int x,int y){
    if(x<y){
        x=-2147483648;
        return x;
    }
}
int main(void)
{
    int a,b,c,d,e,z,p;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    p=max2(a,b);
    p=max2(a,c);
    p=max2(a,d);
    p=max2(a,e);
    z=max(a,b,c,d,e);
    p=max2(b,c);
    p=max2(b,d);
    p=max2(b,e);
    z=max(b,a,c,d,e);
    p=max2(c,d);
    p=max2(c,e);
    z=max(c,a,b,d,e);
    p=max2(d,e);
    z=max(d,a,b,c,e);
    z=max(e,a,b,c,d);

    
    printf("%d\n",z);
    return 0;
}