#include <stdio.h>
int GetDaysOfYear(int year,int month,int day)
{
    int i=0;
    int count;
    int mon[13]={0,31,28,31,30,31,31,30,31,30,31,30,31};
    if(((year%4==0)&&(year%100!=0))||(year%400==0)){
        mon[2]=mon[2]+1;
    }
    for(i=0;i<month;i++){
        count+=mon[i];
    }
    count=count+day;
    return count;
}
int main()
{
    int year=0;
    int month=0;
    int day=0;
to:
    printf("请输入日期：");
    scanf("%d%d%d",&year,&month,&day);
    if((year<=0)||(month>12)||(month<=0)||(day<=0)||(day>=31)){
        printf("您输入的如期不合法，请输入合法的日期。\n");
goto to;
    }
    printf("%d年%d月%d日是%d年的第%d天",year,month,day,year,GetDaysOfYear(year,month,day));
    return 0;
}