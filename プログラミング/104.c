#include <stdio.h>
    int main(void){
    int i,n, a, r,rn=1,s;
    printf("n="); scanf("%d",&n);
    printf("a="); scanf("%d",&a);
    printf("r="); scanf("%d",&r);
    for(i=0;i <n;i++){
        if(i==0)s=a;//和を格納する変数
        else{
            rn*= r;
            s+= a*rn;
        }
    }
    printf("s=%d\n",s);
    return 0;
 }