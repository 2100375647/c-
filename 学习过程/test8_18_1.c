//数组指针变量
//指向数组的指针
#include <stdio.h>
int main()
{
    int arr[10];
    //数组指针的写法
    //数组元素的类型 (*指针变量)[数组元素的个数]
    int (*p)[10]=&arr;//数组指针 - 指针变量，指向数组arr[10],指针p中的地址是arr[10]的地址
    return 0;
}