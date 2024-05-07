//#运算符将宏的参数转换成字符串
#include <stdio.h>
#define print(n,format) printf("the value of "#n" is "format"\n",n)
int main()
{
    int a= 10;
    float b= 2.8888;
    print(a,"%d");
    print(b,"%.2f");
    return 0;
}