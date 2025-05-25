// (2) キーボードから小文字を入力し、その
// 小文字がアルファベット順において何文字進んだら
// zになるかを数えることにより、aかzかもしくは
// それ以外の文字かを判定し、その結果を表示する。
#include <stdio.h>
 int main(void) {
    char c;
    int right = 0;
    printf("c : ");
    scanf("%c", &c);
    while (c!='z') {
        c++;
        right++;
    }
    if (right==0) printf("z\n");
    else if (right ==25) printf("a\n");
    else printf("b ~ y\n");
    return 0;
 }