//空指针
//空指针指向的内容不能被访问
#include <stdio.h>
int main()
{
    int* p=NULL;//创建一个空指针p
    *p=10;//报错,空指针不能被访问
    return 0;
}