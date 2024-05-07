#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int* ptr=(int*)(&a+1);
    //这里的&a是整个数组的地址
    printf("%d %d",*(a+1),*(ptr-1));//*(a+1)中a是数组首元素地址
    return 0;
}