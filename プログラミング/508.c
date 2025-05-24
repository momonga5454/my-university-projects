#include <stdio.h>
void buy(int x,int y)
{
    printf("%d円と%d円を買った\n",x,y);
    printf("合計%d円\n",x+y);
}
int main(void)
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    buy(num1,num2);
    return 0;
}