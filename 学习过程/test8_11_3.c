//判断一个数是否是2的次方
#include <stdio.h>
int main()
{
    int x;
    printf("请输入一个正整数：");
    scanf("%d",&x);
    if((x&(x-1))==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}