#include <stdio.h>
int is_leep_year(int y){
    if(((y%4==0)&&(y%100!=0))||(y%400==0))
        printf("%d年是闰年",y);
    else
        printf("%d年不是闰年",y);
}
int main()
{
    int year=0;
    scanf("%d",&year);
    is_leep_year(year);
}