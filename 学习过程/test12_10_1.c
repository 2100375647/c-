#include <stdio.h>
#include <time.h>
clock_t start,stop;
double time_c;
int main()
{
    start=clock();//程序开始的时钟打点数
    for(int i=0;i<100;i++){
        printf("%d ",i);
    }
    printf("\n");
    stop=clock();//程序结束的时钟打点数
    time_c=(double)(stop-start)/CLK_TCK;//CLK_TCK是一秒内所走的时钟打点数
    printf("%f",time_c);
}