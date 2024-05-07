#include <stdio.h>
int main()
{
    int x;
    printf("请输入成绩：");
    scanf("%d",&x);
    if (x >= 100 && x<=90)
        printf("A");
    else if(x >= 80 && x<90)
        printf("B");
    else if(x>=70 && x<80)
        printf("C");
    else if(x>=60 && x<70)
        printf("D");
    else if(x>=0 && x<60)
        printf("E");
    else
        printf("非法成绩\n");
    return 0;
}