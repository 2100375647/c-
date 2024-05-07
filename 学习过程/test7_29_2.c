//调用外部自定义函数
#include <stdio.h>
int main()
{
    int x=0;
    int y=0;
    int a;
    scanf("%d%d",&x,&y);
    a = add(x,y);
    printf("%d",a);
    return 0;
}