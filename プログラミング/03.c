#include<stdio.h>
int main(void){
    int i,j,k,n,l,p,q,r,a;
    scanf("%d",&n);
    printf("Input an odd number larger than 8: %d\n",n);
    for(i=(n-1)/2;i>0;i--){
        for(j=i;j<(n-1)/2;j++){
            printf(" ");
        }
        printf("\\");
        for(k=1;k<=2*i-1;k++){
            if(i==(n-1)/2){
                printf("-");
            }
            else if(i==3 || i==2 || i==1 ){
                printf("○");
            }
            else{
                printf(" ");
            }
            if(k==2*i-1){
                printf("/\n");
            }
        }                                                               
    }
    for(a=0;a<(n-1)/2;a++){
        printf(" ");
    }
    printf("○\n");

    for(l=1;l<=(n-1)/2;l++){
        for(p=l;p<(n-1)/2;p++){
            printf(" ");
        }
        printf("/");
        for(q=0;q<2*l-1;q++){
            if(l==(n-1)/2){
                printf("-");
            }
             else if(l==(n-1)/2-1 || l==(n-1)/2-2 ){
                printf("○");
            }
             else{
                printf(" ");
            }
             if(q==2*l-2){
                printf("\\");
                printf("\n");
            }
        }
        
    }
}