#include<stdio.h>
int main(void)
{
    double r,s;

    scanf("%lf",&r);
    scanf("%lf",&s);
    if(r>s){
        printf("%f,%f\n",r,s);
    }
    else if(s>r){
        printf("%f,%f\n",s,r);
    }
    
    return 0;
}