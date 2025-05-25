#include<stdio.h>
int main(void)
{
    char str[100];
    int i;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(i==5){
            printf("Yes");
            break;
        }
        else if(i>5){
            printf("No");
            break;
        }
        else if(i<5){
            
            continue;
        }
    }  
    return 0;
    
}
//無理ゲー