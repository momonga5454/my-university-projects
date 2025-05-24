#include <stdio.h>

void buy(int x)
{
    printf("%d円買った\n",x);
}
int main(void)
{
    int num;
    scanf("%d",&num);
    buy(num);
    return 0;
}