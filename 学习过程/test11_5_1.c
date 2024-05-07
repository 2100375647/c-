//fgetc函数
//函数原型
//int fgetc( FILE *stream )
//从输入流中获取一个字符，返回值是这个字符的ascll码值
#include <stdio.h>
int main()
{
    int c;
    c=fgetc(stdin);
    printf("%c\n",c);
    return 0;
}