#include <stdio.h>
//static修饰局部变量时会将局部变量时的存放地址由原本的栈区改变到静态区--局部变量的生民周期也会发生改变
//static修饰全局变量后外部连接属性就变成了内部链接属性--其他源文件就不能再使用全局变量
//static修饰函数后函数同样也不再具有外部连接属性
//extern声明外部符号--全局变量具有外部链接性--函数也具有外部连接性
void test()
{
    static int a = 0;
    a++;
    printf("%d ",a);
}
int main()
{
    int i=0;
    for(i=0;i<4;i++){
        test();
    }
    return 0;
}