//小数xと正整数nを入力させ、
//小数点以下第n位を切り捨て・四捨五入しそれぞれ表示する
// ./a.out
 // Enter a real number: 0.123456
 // Enter a positive integer: 5
 // 0.123400 0.123500
 #include<stdio.h>
    int main(void){
    int i, n;
    double x, round, rounddown, d = 1;
    printf("Enter a real number: ");
    scanf("%lf", &x);
    printf("Enter a positive integer: ");
    scanf("%d", &n);
     for(i = 1; i < n; i++){
        d *=10;
    }
    rounddown = (int )(d*x) / d;
    round = (int )(d*x + 0.5) / d;
    printf("%f %f\n", rounddown, round);
    return 0;
 }