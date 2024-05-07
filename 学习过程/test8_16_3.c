//指针数组 - 用来存放指针的数组
#include <stdio.h>
int main()
{
    int a=1;
    int b=2;
    int c=3;
    int* arrp[]={&a,&b,&c};
    for(int i=0;i<3;i++){
        printf("%d ",*(arrp[i]));
    }
    return 0;
}