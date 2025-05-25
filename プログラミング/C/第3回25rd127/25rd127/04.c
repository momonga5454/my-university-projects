#include <stdio.h>
#include <ctype.h>

int main() {
    char c ;
    scanf("%c",&c);

    if (isalpha((int)c)) {
        printf("an alphabet character\n");
    } else {
        printf("not an alphabet character\n");
    }

    return 0;
}