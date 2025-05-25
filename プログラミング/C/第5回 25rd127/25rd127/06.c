#include<stdio.h>
int main(void)
{
    int m,i,a;
    scanf("%d",&m);
    
    for(i=2;i<m+1;i++){
        a=m%i;
        if(m==2){
            printf("Prime\n");
            break;
        }
        else if(i>m){
            break;
        }
        else if(i==m){
            printf("Prime\n");
            break;
        }
        else if(a==0){
            printf("Not Prime\n");
            break;
        }
        
    }

    return 0;
}