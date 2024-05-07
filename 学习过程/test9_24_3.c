//内存函数，是指直接对内存中的数据进行操作的一组函数，内存函数不会在乎内存之中存放的是什么类型的数据，只可以处理内存数据不重叠的数据
//memcpy函数是堆内存中的函数进行复制的函数
//函数原型：
//void memcpy(void* destinaion,const void* source,size_t num);
//其中void* destinaion是拷贝函数的目的地
//const void* source是要拷贝的源数据
//size_t num是所要拷贝的字节数
#include <stdio.h>
#include <string.h>
int main()
{
    int arr[10]={0};
    int arr2[]={1,2,3,1,4,1,2};
    memcpy(arr,arr2,20);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}