//联合体-也叫共用体-联合体在通个时间内只能使用一个成员
#include <stdio.h>
union a
{
    int a;
    char b;
};
int main()
{
    union a x={10,'x'};
    printf("%d\n",sizeof(x));
    printf("%p\n",&x.a);
    printf("%p",&x.b);
    return 0;
}