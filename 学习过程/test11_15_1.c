#include <stdio.h>
#define MAX(type) \
type type##MAX(type x,type y)\
{\
    return x>y?x:y;\
}
MAX(int)
MAX(float)
int main()
{
    int a=10,b=20;
    int c=intMAX(a,b);
    printf("max of %d and %d is %d\n",a,b,c);
    return 0;
}