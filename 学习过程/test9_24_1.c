//strerror函数，返回一个错误码所对应的错误信息的起始地址
//strerro
//函数原型：
//char* strerror(int reenum);
#include <stdio.h>
#include <string.h>
int main()
{
    for(int i=0;i<10;i++){
        printf("%d:%s\n",i,strerror(i));
    }
    return 0;
}
//当库函数在调用失败时会将错误码存放到errno变量中
//errnoC语言的一个全局变量,在头文件<errno.h>的头文件中定义
//相关函数：perror,直接根据errno变量的数值打印错误信息