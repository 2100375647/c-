//#define定义宏
#include <stdio.h>
#define add(x) ((x)*(x))
#define max(a) ((a)>(99)?("大于99"):("小于99"))
int main()
{
    printf("%d",add(2+5));
    printf("\n%s",max(2)); 
    return 0;
}