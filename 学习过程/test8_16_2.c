//二级指针
#include <stdio.h>
int main()
{
    int a=10;
    int* p=&a;
    //a是整型变量，占4个字节，有自己的地址，&a拿到的是4个字节的第一个字节地址
    //p是指针变量，占又4/8个字节，p也有自己的地址，&p就拿到了p的地址(一级指针)
    int* * pp=&p;
    //pp也是指针变量，pp是二级指针
    printf("%d",**pp);
    return 0;
}