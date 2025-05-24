#include<stdio.h>
int main(void)
{
    
    double n,s,a,i;
    s=0;
    n=1;
    for(i=0;n>0;i++){
        scanf("%lf",&n);
        if(n<0){
            break;
        }
        s+=n;
    }
    if(s!=0){
        a=s/i;
        printf("%f\n",a);
    }
    else{
        printf("No date\n");
    }
    return 0;
}