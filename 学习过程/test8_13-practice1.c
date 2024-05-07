//模拟实现库函数strlen(方法一)
#include <stdio.h>
int strlenm(char* arr)
{
    int count=0;
    while(*arr != '\0'){
        count++;
        arr++;
    }
    return count;
}
int main()
{
    char x[]="123456789";
    printf("%d",strlenm(x));
    return 0;
}