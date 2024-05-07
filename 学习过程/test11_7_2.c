//预定义符号
#include <stdio.h>
int main()
{
    printf("%s",__FILE__);//源文件绝对路径
    printf("\n%d",__LINE__);//当前行的行数
    printf("\n%s",__DATE__);//编辑程序的日期
    printf("\n%s",__TIME__);//当前时间
    printf("\n%d",__STDC__);
    return 0;
}