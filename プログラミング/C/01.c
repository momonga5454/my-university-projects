#include<stdio.h>
int main(void)
{
    int n,i,j,d,y,s;
    scanf("%d",&n);
    printf("Input a positive number: %d\n",n);
    for(i=1;i<=n;i++){
        d=0;
        y=0;
        for(j=1;j<=i;j++){
            
            if(i%j==0){
                d++;
                y+=j;
            }
        }
        if((i*d)%y==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}