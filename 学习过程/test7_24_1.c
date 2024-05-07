//switch分支语句
//逻辑操作符
// ！ :逻辑反运算
// && :逻辑与运算
// || :逻辑或运算
#include <stdio.h>
int main()
{
    
    int x;
    scanf("%d",&x);
    switch (x%3)
    {
    case 0:
        printf("余数是0");
        break;
    case 1:
        printf("余数是1");
        break;
    case 2:
        printf("余数是2");
        break;
    default:
        printf("输入错误");
    }
    return 0;
}