//const修饰变量，变量的值不会再发生变量
//const修饰指针：
//  const在*左边：指针变量所指向的的数据不可再发生变化
//  const在*右边：指针变量所指向的地址不能发生变化
//  const再*左右两侧：指针变量指向的地址和这个地址中的数据都不可以在发生变化
#include <stdio.h>
int main()
{
    int a=9;
    int c=10;
    int b=11;
    //const在*左边 - 指针变量所指向地址的数据将不能再发生变化
    const int* p=&a;
    printf("%d ",*p);
    // *p=10; - 不可修改指针变量所指向地址的数据
    p=&c;
    printf("%d \n",*p);
    int* const x=&b;
    printf("%d ",*x);
    *x=19;
    printf("%d \n",*x);
    // x=&a; - const在*右边指针所指向的地址不能再改变
    return 0;
}