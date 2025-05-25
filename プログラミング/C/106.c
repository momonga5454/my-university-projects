// 文字を1行入力すると、
// 1文字ずつ取り、 改行までの文字を表示する
// .a.out
 // Enter characters: This is a test.
 // This is a test.
 #include<stdio.h>
 int main(void)
 {
    char c;
    printf("Enter characters: ");
    do{
        // 1文字取り
        scanf("%c", &c);
        //1 文字出力
        printf("%c", c);
    }while(c!='\n');
    return 0;
 }