//字符指针变量 - 用来存放字符类型数据的指针
#include <stdio.h>
int main()
{
    char ch='a';
    char* pc=&ch;
    const char* p="abcdefg";//将常量字符串abcdefg(不可被修改)的首字符的地址存放进了p中 - 可以通过const限制指针p的修改和访问权限
    //可以通过%s来打印p指针所指向的字符串的所有内容
    // *p = 'd';
    return 0;
}