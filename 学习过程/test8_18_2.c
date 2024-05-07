//函数指针变量 - 函数也是有地址的
//函数指针是存放函数地址的指针
#include <stdio.h>
int add(int x,int y)
{
    return x+y;
}
int main()
{
    //函数指针的写法
    //返回值类型 (*指针变量)(参数类型)
    int (*pf)(int,int)=&add;
    //&add和add都是函数的地址
    printf("%p\n",&add);
    //通过指针对函数进行调用 - 指针调用函数的写法(*函数指针变量)(传入参数)   注:函数名就是函数的地址没有*或者有多个*也是可以正常调用函数
    printf("%d",(*pf)(3,5));
    return 0;
}