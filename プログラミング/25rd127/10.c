#include<stdio.h>
int main(void)
{
    int n,i,j,k;
    char c;
    scanf("%d",&n);
    for(j=n;j>0;j--){
        for(k=0;j+k!=n;k++){
            printf(" ");
        } 
        for(i=97;i<=96+j;i++){
            c=i;
            printf("%c",c);
            }
        printf("\n");
        }  
    return 0;
}