#include <stdio.h>
//定义函数判断是否是闰年
int is_leep_year(int y){
    if(((y%4==0)&&(y%100!=0))||(y%400==0))
        return 1;
    else
        return 0;
}
int main()
{
    int y=0;
    scanf("%d",&y);
    if(is_leep_year(y))
        printf("%d年是闰年\n",y);
    else
        printf("%d年不是闰年\n",y);
    return 0;
}