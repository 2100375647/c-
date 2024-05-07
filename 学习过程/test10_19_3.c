//结构体实现位段
#include <stdio.h>
struct a
{
    int  _a:1;//只占1个比特位
    int _b:2;
    int _c:3;
};
int main()
{
    struct a s;
    s._a = 1;
    s._b = 2;
    s._c = 3;
    printf("%d\n",sizeof(struct a));
    return 0;
}