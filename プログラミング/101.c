// (1) キーボードから整数値を入力し、その整数値
// が0以上の数であれば、その整数値から0まで
// の整数を全て表示させる。また、入力した整数値が
// 3の倍数であるとき、0からその整数値までの整数
// を全て表示させる。
#include <stdio.h>
    int main(void) {
    int a, tmp;
    printf("a : ");
    scanf("%d", &a);
    tmp = a;
    while (1) {
        if (a==-1) break;
        printf("%d\n", a);
        a = a- 1;
    }
    if (tmp%3==0) {
        a = a + 1;
        while (1) {
            if (a>tmp) break;
            printf("%d\n", a);
            a = a + 1;
        }
 }
 return 0;
 
}
