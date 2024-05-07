#include <stdio.h>
int main()
{
    //sizeof  操作符
    //用来计算变量所占内存空间大小，单位是字符
    //sizeof返回值是size_t类型，打印的是后用的格式应该是%zd
    printf("int类型所占内存大小为%zd个字符\n",sizeof(int));
    printf("float类型所占内存大小为%zd个字符\n",sizeof(float));
    printf("long类型所占内存大小为%zd个字符\n",sizeof(long));
    printf("long long类型所占内存大小为%zd个字符\n",sizeof(long long));
    printf("double类型所占内存大小为%zd个字符\n",sizeof(double));
    printf("short类型所占内存大小为%zd个字符\n",sizeof(short));
    printf("char类型所占内存大小为%zd个字符\n",sizeof(char));
    return 0;
}