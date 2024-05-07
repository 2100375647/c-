#include <stdio.h>
int main()
{
    char* a[]={"work","at","alibaba"};
    char** pa=a;//这里的a是数组的首元素地址
    pa++;
    printf("%s\n",*pa);
    return 0;
}