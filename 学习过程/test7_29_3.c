#include <stdio.h>
void test()
{
    //static--改变变量的生命周期--不改变变量的
    static int a = 0;
    a++;
    printf("%d",a);
}
int main()
{
    int i=0;
    for(i=0;i<5;i++)
    {
        test();
    }
    return 0;
}