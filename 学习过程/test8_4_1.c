//函数的递归
//递归求阶乘
#include <stdio.h>
int fact(int n)
{
    if(n<=0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    printf("请输入数字");
    scanf("%d",&n);
    printf("%d的介乘是%d",n,fact(n));
    return 0;
}