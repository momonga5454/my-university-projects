#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    int i,a,s;
    a=0;
    s=0;
    for(i=0;a!=33;i++){
        scanf(" %c",&c);
        a=c;
        if(a==33){
            break;
        }
        else if(islower(c)){
            s+=1;
        }
    }
    printf("%d\n",s);
    
    return 0;
}