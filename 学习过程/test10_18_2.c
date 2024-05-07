//验证结构体的对齐方式
//#pragema pack(n)预处理指令对对其数进行修改
//#pragema pack()取消设置对齐数
#include <stdio.h>
struct s1
{
    int a;
    int b;
    char c;
};
struct s2
{
    char a;
    int c;
    char b;
};
int main()
{
    printf("%d\n",sizeof(struct s1));
    printf("%d",sizeof(struct s2));
    return 0;
}
