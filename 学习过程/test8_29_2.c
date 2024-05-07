//函数指针数组
//函数指针数组：是数组,存放的是函数的指针
#include <stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sud(int x,int y)
{
    return x-y;
}
int main()
{
    // int (*p1)(int,int)=&add;
    // int (*p1)(int,int)=&sud;
    //函数指针数组 - 存放函数指针的数组
    int (*parr[2])(int,int)={add,sud};
    for(int i=0;i<2;i++){
        printf("%p",*parr[i]);
        printf("\n"); 
    }
    return 0;
}