//assert断言
//assert()对括号内的语句进行判断，如果括号内的的表达式为假就会终止程序，如果正确就不会干预程序的运行
//assert包含在<assert.h>的头文件
#define NEDBUG//定义宏禁用assert()断言语句 - assert()断言的开关
#include <stdio.h>
#include <assert.h>

int main()
{
    int a=10;
    int* p=&a;
    assert(p!=&a);
    return 0;
}