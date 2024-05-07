//字符转换函数
//toupper()函数将小写字符转换成大写
//tolower()函数将大写字符转换成小写
#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    scanf("%s",&a);
    printf("%c",toupper(a));
    return 0;
}