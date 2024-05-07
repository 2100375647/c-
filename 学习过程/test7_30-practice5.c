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
    int i=0;
    printf("1000年到2000年之间闰年有：\n");
    for(i=1000;i<=2000;i++){
       if(is_leep_year(i)){
            printf("%d ",i);
       }
    }
}