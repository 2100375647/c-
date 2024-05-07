//goto语句
//跳过之后代码直接跳过，跳到指定代码
#include <stdio.h>
int main()
{
    printf("hehe\n");
goto end;
    printf("haha\n");
end:
    printf("跳过了哈哈");
    return 0;
}