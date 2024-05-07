//猜数字游戏
/*
生成随机数rand(返回值是整型)
函数原型：
    int rand(void);
    (void表示不用传参)
    rand返回一个伪随机数，这个随机数的范围是0~RAN_MAX之间，RAN_MAX的大小是依赖编译器上实现的大部分是32767
    rangd函数依赖于头文件<stdlib.h>
srand生成随机数的种子
函数原型：
    void srand(unsigned int seed);
    void表示srand函数没有返回值
time时间差值
函数原型：
    time_t time(time_t* timer);
    表示从1970年1月1日0时0分0秒到程序运行的时间差单位是秒
    (time函数依赖于头文件<time.h>)
随机数范围的控制
a + rand()%(b-a+1)生成一个a~b之间的随机数
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("--------------------\n");
    printf("----0 结束游戏------\n");
    printf("----1 重新游戏------\n");
    printf("--------------------\n");
    printf("请选择：\n");
    
}
int main()
{
    int a;
    int x,y=1,z=0;
    int count=0;
    srand((unsigned)time(NULL));//设置随机数种子
    a=10+rand()%(20-10+1);//生成一个10~20的随机数
    while(y){
        printf("请输入10~20的数字:");
        scanf("%d",&x);
        if(x==a){
            printf("你猜对了！\n");
            count++;
            printf("你一共猜了%d次\n",count);
            menu();
            scanf("%d",&z);
            if(z==1){
                y=1;
                count=0;
            }
            else
                y=0;
        }
        else{
            printf("你猜错了！\n");
            count++;
        }
    }
    return 0;
}