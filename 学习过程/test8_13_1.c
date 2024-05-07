//用指针遍历字符数组
#include <stdio.h>
int main()
{
    char str[]="asdasdfasd";
    char* p=&str[0];
    while(*p != '\0'){
        printf("%c ",*p);
        p++;
    }
    return 0;
}