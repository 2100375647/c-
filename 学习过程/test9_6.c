//复制函数的模拟实现
#include <stdio.h>
#include <string.h>
char* my_strcpy(char* p1, const char* p2)
{
    char* ret=p1;
    while (*p1 ++ = *p2 ++) {
        ;
    }
    return ret;
}
int main()
{
    char p1[] = "asdasdasas";//常量字符串放在数组中本质上字符串没有被改编改变的是数组中的元素
    const char* p2 = "hello";// 常量字符串不可被修改
    printf("%s", my_strcpy(p1, p2));
    return 0;
}