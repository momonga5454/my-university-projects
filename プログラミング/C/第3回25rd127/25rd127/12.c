#include<stdio.h>
void Eval(int n,int m){
    int p;
    p=(n+m)/2;
    if(p>=60){
        printf("Pass\n");
    }
    else if(p<60){
        printf("Fail\n");
    }
}
int main(void) 
{
    double x,y,z,a,b,c,s1,s2;
    int t1,t2;
    printf("TのMidを入力");
    scanf("%lf",&x);
    printf("DのをMidを入力");
    scanf("%lf",&y);
    printf("UのMidを入力");
    scanf("%lf",&z);
    printf("TのEndを入力");
    scanf("%lf",&a);
    printf("DのEndを入力");
    scanf("%lf",&b);
    printf("UのEndを入力");
    scanf("%lf",&c);
    printf("\tMid\t");
    printf("End\t");
    printf("Eval\n");
    printf("T\t");
    printf("%g\t",x);
    printf("%g\t",a);
    Eval(x,a);
    printf("D\t");
    printf("%g\t",y);
    printf("%g\t",b);
    Eval(y,b);
    printf("U\t");
    printf("%g\t",z);
    printf("%g\t",c);
    Eval(z,c);
    printf("Avg\t");
    s1=(x+y+z)/3;
    t1=s1*10;
    s2=(a+b+c)/3;
    t2=s2*10;
    printf("%.1f\t",(double)t1/10);
    printf("%.1f\n",(double)t2/10);
    
    return 0;

}