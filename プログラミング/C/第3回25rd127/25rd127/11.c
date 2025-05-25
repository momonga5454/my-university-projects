#include<stdio.h>
#include<math.h>
int main(void)
{
    
    int r,s,x;
    double a;
    scanf("%d",&r);
    scanf("%d",&s);
    r*=r;
    s*=s;
    x=r+s;
    a=sqrt(x);
    if(a>=100 || a<=10){
        printf("%.2f\n",a);
    }
    return 0;

}