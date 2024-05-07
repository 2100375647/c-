//有参数宏定义
#define SUN(x,y) if(x>10)
#include <stdio.h>
int main()
{
    int n=10,m=22;
    printf("%d",SUN(n,m));
    return 0;
}