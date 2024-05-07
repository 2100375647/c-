//函数的递归按顺序打印整数的每一位数
#include <stdio.h>
void print(int n)
{
    if(n>9)
        print(n/10);
    printf("%d ",n%10);
}
int main()
{
    int x=0;
    scanf("%d",&x);
    print(x);
    return 0;
}