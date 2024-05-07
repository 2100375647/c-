//自定义函数函数
//函数的返回类型有两种，一种是void(无返回值)，另一种是其他(有返回值)
#include <stdio.h>
int add(int x,int y){
    int z=0;
    z=x+y;
    return z;
}
int main()
{
    int x=0;
    int y=0;
    scanf("%d%d",&x,&y);
    printf("%d+%d=%d",x,y,add(x,y));
    return 0;
}