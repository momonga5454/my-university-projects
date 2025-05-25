#include<stdio.h>
int main(void)
{
    char res;
    scanf("%c",&res);
    switch(res){
        case '*':
            printf("asterisk\n"); 
            break;
        case '|':
            printf("vertical line\n");
            break;
        case '~':
            printf("tilde\n");
            break;
    }
    return 0;
}