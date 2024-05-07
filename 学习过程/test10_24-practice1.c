#include <stdio.h>
void my_yhsj(int a)
{
    for(int i=1;i<a;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a;
    printf("请输入你想要打印的杨辉三角的行数:");
    scanf("%d",&a);
    my_yhsj(a);
    return 0;
}