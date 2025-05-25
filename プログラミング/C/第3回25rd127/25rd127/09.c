#include<stdio.h>
int main(void)
{
    
    int ren;
    scanf("%d",&ren);
    if(ren>=60 && ren<=69){
        printf("C\n");
    }
    else if(ren>=70 && ren<=79){
        printf("B\n");
    }
    else if(ren>=80 && ren<=89){
        printf("A\n");
    }
    else if(ren>=90 && ren<=100){
        printf("S\n");
    }
    else if(ren<=59 && ren>=0){
        printf("D\n");
    }
    else{
        printf("Error");
    }

    return 0;

}