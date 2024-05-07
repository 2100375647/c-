//通过while循环模拟strlen()函数的实现
#include <stdio.h>
#include <assert.h>
size_t my_strlen(const char* str)
{
    assert(str!='\0');
    size_t count=0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}
int main()
{
    char s[]="asdafqweqweq";
    int len=my_strlen(s);
    printf("%d",len);
    return 0;
}