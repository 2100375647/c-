//逆序打印整数 - 输入一个整数打印出这个整数的每一位数
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while (a)
    {
        printf("%d ",a%10);
        a=a/10;
    }
    
    return 0;
}