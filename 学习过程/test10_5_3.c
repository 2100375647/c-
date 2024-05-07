//memcmp函数
//函数原型：
//int memcmp(const void* ptr1,const void* ptr2,size_t num);
//比较从ptr1和ptr2指针指向的位置开始向后的num个字节,如果相同返回0如果不相同返回非0的数字
#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[]="abcdeasdas";
    char arr2[]="abcdefggsagsd";
    printf("%d",memcmp(arr1,arr2,6));
    return 0;
}