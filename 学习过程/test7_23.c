#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("%5d\n",123);//输出最小宽度为5不够用空格补齐--超过5位宽度就不受限制
    printf("%-5d\n",123);//改变对齐方式
    printf("%12f\n",123.23);//输出最小宽度--右对齐--不够补空格
    printf("%-12f\n",123.23);//改变对齐方式
    printf("%+d\n",123);//始终打印正负号
    printf("%.1f\n",123.23);//限制小数点后的位数
    //输出字符串中的部分字符‘%.ms’
    printf("%.4s\n","abcdef");
    //scanf的返回值--返回值是int--如果遇到文件结尾就会返回EOF--值为-1
    d = scanf("%d%d%d",&a,&b,&c);
    scanf("%d",&a);
    printf("%d",d);
    return 0;
}