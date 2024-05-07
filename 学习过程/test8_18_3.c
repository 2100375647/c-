#include <stdio.h>
int add(int x,int y)
{
    return x+y;
}
int main()
{
    //指针数组
    int* arr1[10];
    char* arr2[10];
    //数组指针
    int arr3[10]={0};
    int (*p1)[10]=&arr3;
    char (*p2)[10];
    //函数指针
    return 0;
}