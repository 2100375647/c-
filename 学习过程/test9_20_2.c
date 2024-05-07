// 字符串追加函数strcat()模拟实现
#include <stdio.h>
#include <string.h>
char *my_strcat(char *a, const char *b)
{
    char *ret = a;
    while (*a != '\0')
    {
        a++;
    }
    while (*a++ = *b++)
    {
        ;
    }
    return ret;
}
int main()
{
    char a[50] = "hello ";
    char* b = "world";
    printf("%s", my_strcat(a, b));
    return 0;
}