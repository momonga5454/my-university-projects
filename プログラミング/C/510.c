#include<stdio.h>
int sum(int x,int y)
{
    return x+y;
}
int main(void)
{
    int num1,num2,z;
    scanf("%d",&num1);
    scanf("%d",&num2);
    z=sum(num1,num2);
    printf("合計%d円\n",z);
    return 0;
}