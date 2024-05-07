//判断是否是5的倍数
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a % 5==0){
        printf("Yes");
    }
    else if(a % 5 != 0){
        printf("No");
    }
    return 0;
}