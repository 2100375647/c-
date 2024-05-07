//判断闰年
#include <stdio.h>
int main()
{
    int year;
    printf("请输入想要判断的年份：");
    scanf("%d",&year);
    if(year%4==0 && year%100==0)
        printf("%d是闰年",year);
    else if(year%400==0)
        printf("%d是闰年",year);
    else
        printf("%d不是闰年",year);
    return 0;
}