//用指针的相减模拟strlen()函数的实现
#include <stdio.h>
size_t my_strlen(char* str)
{
    char* str1=str;
    while(*str!='\0'){
        str++;
    }
    return str-str1;
}
int main()
{
    char a[]="asdakfnjlkwsjf";
    int len=my_strlen(a);
    printf("%d",len);
    return 0;
}