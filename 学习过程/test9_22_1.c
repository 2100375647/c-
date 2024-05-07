/*
char *strtok( char *strToken, const char *strDelimit );
用来将字符串分割成一个个片段。参数str指向欲分割的字符串，参数delimiters则为分割字符串，
当strtok()在参数str的字符串中发现到参数delimiters的分割字符时则会将该字符改为'\0'字符。
在第一次调用时，strtok()必需给予参数str字符串，往后的调用则将参数str设置成NULL。
每次调用成功则返回下一个分割后的字符串指针第二个参数分隔符是一个字符串，所以可以包含多个分隔符，
如果第一个参数中包含第二个参数中任意一个分隔符，函数都会对其分割。
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[60] = "2100375647@qq.com";
    char *buf[] = {0};
    strcpy(buf, arr);
    char *p = "@.";
    char *r = NULL;
    for (r = strtok(buf, p); r != NULL; r = strtok(NULL, p))
    {
        printf("%s\n", r);
    }
    return 0;
}