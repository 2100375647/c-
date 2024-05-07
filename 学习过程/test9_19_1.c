#include <stdio.h>
#include <ctype.h>
//islower()函数是判断一个字符是否是小写字符a~z，如果是返回一个非0的数值
//isupper()函数是判断一个字符是否是大写字符如果是就返回一个非0的数值
int main()
{
    int a=islower('a');
    int b=islower('Q');
    int c=isupper("a");
    int d=isupper('Q');
    printf("%d %d\n%d %d",a,b,c,d);
}