#include<stdio.h>
int main(void)
{
    
    int r,s,a,b;
    scanf("%d",&r);
    scanf("%d",&s);
    a=r%2;
    b=s%2;
    if(a==0 && b==0){
        printf("%d\n",r+s);
    }
    else if(a==0 && b!=0){
        printf("%d\n",r-s);
    }
    else if(a!=0 && b==0){
        printf("%d\n",r-s);
    }
    else if(a!=0 && b!=0){
        printf("%d\n",r*s);
    }

    return 0;

}