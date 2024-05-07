//三个数字判断大小
#include <stdio.h>
int main()
{
    int x,y,z,t;
    printf("请输入三个数字:");
    scanf("%d%d%d",&x,&y,&z);
    if (x<y) {
        t=x;x=y;y=t;
    }
    if(x<z) {
        t=z;z=x;x=t;
    }
    if(y<z) {
        t=y;y=z;z=t;
    }
    printf("从大到小排序:%d %d %d",x,y,z);
}