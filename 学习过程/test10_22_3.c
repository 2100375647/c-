//用共用体判断数据存储方式是小端还是大端
#include <stdio.h>
#include <string.h>

union test
{
    int i;
    char c;
};

int main(void)
{
    union test t;
    t.i=1;
    printf("%d",t.c);
    return 0;
};