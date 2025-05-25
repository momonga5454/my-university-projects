#include<stdio.h>
int buy(int x,int y)
{
    int z;
    printf("%d円と%d円",x,y);
    z=x+y;
    return z;
}
int main(void)
{
    int num1,num2,sum;
    scanf("%d",&num1);
    scanf("%d",&num2);
    sum=buy(num1,num2);
    printf("合計%d円\n",sum);
    return 0;
}