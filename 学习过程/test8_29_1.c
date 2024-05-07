//typedef对数据类型进行重命名
#include <stdio.h>
//对数组指针类型进行重命名
typedef int(*plt_r)[6];
int main()
{
    int arr[6];
    plt_r p1=&arr;
    return 0;
}