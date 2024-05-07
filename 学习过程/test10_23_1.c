/*
动态内存分配
malloc函数 - 向内存申请指定长度的内存
malloc开辟成功会返回一个void*类型的指针,开辟失败则会返回一个空指针
函数原型：
void* malloc(size_t size)
    malloc函数开辟的空间最终会被操作系统回收或者由程序员自己使用free函数回收
free函数原型:
void free( void *ptr );
    free函数释放内存之后会产生一个野指针，这是我们就要将这个野指针置空
    如果函数free传入的参数ptr不是动态开辟的那么这个函数的行为就是未定义的
    free函数释放内存指针必须指向起始位置
malloc和free函数包含在<stdlib.h>的头文件中
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = (int *)malloc(10 * sizeof(int)); // malloc函数开辟空间
    // 判断malloc是否开辟成功
    if (p == NULL)
    {
        perror("malloc");
        return 1;
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            *(p + i) = i;
            printf("%d ", *(p + i));
        }
    }
    free(p);
    p = NULL;
    return 0;
}