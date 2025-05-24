#include<stdio.h>
int main(void)
{
    double s,i,n;
    scanf("%lf",&n);
    s=0;
    for(i=1;i<=n;i++){
          s+=(1/i/i);
    }
    printf("%f\n",s);
    return 0;
}