//不创建临时变量对两数进行交换
#include <stdio.h>
int main()
{
    int a=3;
    int b=5;
    printf("交换前 a=%d,b=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("交换后 a=%d,b=%d",a,b);
    return 0;
}