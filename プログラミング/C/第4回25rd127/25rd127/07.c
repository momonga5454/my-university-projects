#include <stdio.h>

int main() {
    char ch;
    ch='a';
    while (ch!='E') {
        scanf("%c",&ch);
        printf("%d\n",ch);
    }
    
    return 0;
}