#include<stdio.h>
int main(void) {
double xt, xtm1 = 0, xtm2 = 0;
double g1, g2;

printf("Input USD/JPY exchange rates: ");
while (1) {
    scanf("%lf", &xt);
    if (xt == 0) break;

    if (xtm1 == 0) {
        printf("%.2f\t\tg_1: N/A,\tg_2: N/A\n", xt);
    } else if (xtm2 == 0) {
        g1 = ((xt - xtm1) / xtm1) * 100;
    printf("%.2f\t\tg_1: %.2f%%,\tg_2: N/A\n", xt, g1);
    } else {
    g1 = (100*(xt - xtm1) / xtm1) ;
    g2 = (100*(xt - xtm2) / xtm2) ;
    printf("%.2f\t\tg_1: %.2f%%,\tg_2: %.2f%%\n", xt, g1, g2);
    }

    xtm2 = xtm1;
    xtm1 = xt;
}

return 0;
}