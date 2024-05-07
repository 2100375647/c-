//函数的传参方式
//传值调用 - 只是将实参的值传给形参，形参只是实参的一份临时拷贝，对形参的修改不会影响到实参，形参具有独立的空间
//传址调用 - 将实参的地址直接传给形参通过指针对实参直接进行操作
#include <stdio.h>
void Swap(int* x, int* y)
{
    int a;
    a=*x;
    *x=*y;
    *y=a;
}
int main()
{
    int x;
    int y;
    scanf("%d%d",&x,&y);
    Swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}