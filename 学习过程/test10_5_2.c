//memset函数
//将给定内存地址之后的指定字符数的内容修改成想要的字符,以字节为单位进行操作的所以不能修改整形
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[]="eeeeeee";
    memset(arr,'x',3);
    printf("%s\n",arr);
    return 0;
}