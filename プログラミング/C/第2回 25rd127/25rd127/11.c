#include<stdio.h>
int main(void) 
{
    double x,y,z,a,b,c;
    printf("Tの英語を入力");
    scanf("%lf",&x);
    printf("Dの英語を入力");
    scanf("%lf",&y);
    printf("Uの英語を入力");
    scanf("%lf",&z);
    printf("Tの数学を入力");
    scanf("%lf",&a);
    printf("Dの数学を入力");
    scanf("%lf",&b);
    printf("Uの数学を入力");
    scanf("%lf",&c);
    printf("\tT\t");
    printf("D\t");
    printf("U\t");
    printf("Average\n");
    printf("English\t");
    printf("%g\t",x);
    printf("%g\t",y);
    printf("%g\t",z);
    printf("%.1f\n",(x+y+z)/3);
    printf("Math\t");
    printf("%g\t",a);
    printf("%g\t",b);
    printf("%g\t",c);
    printf("%.1f\n",(a+b+c)/3);
    printf("Total\t");
    printf("%g\t",a+x);
    printf("%g\t",b+y);
    printf("%g\n",c+z);
    
    return 0;

}