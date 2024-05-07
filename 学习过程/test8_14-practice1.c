//模拟实现库函数strlen(方法二)
#include <stdio.h>
#include <assert.h>
int strlenm(const char* arr)//数组名就是数组第一个元素的地址
{
    assert(*arr!='\0');
    char* start=arr;
    while(*start !='\0'){
        start++;
    }
    return start-arr;
}
int main()
{
    char x[]="123456789";
    printf("%d",strlenm(x));
    return 0;
}