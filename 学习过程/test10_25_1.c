//柔性数组
//结构体中最后一个成员是一个未知大小的数组
//柔性数组之前必须要有一个其他成员
//sizeof计算结构体大小时不计算柔性数组的大小
#include <stdio.h>
#include <stdlib.h>
struct S
{
    int a;
    int arr[];//柔性数组成员
};
int main()
{
    struct S s;
    struct S *p=(struct S*)malloc(sizeof(s)+sizeof(int)*10);//为结构体动态开辟空间
    for(int i=0;i<10;i++){
        p->arr[i]=i;
    }
    for(int i=0;i<10;i++){//
        printf("%d ",p->arr[i]);
    }
    free(p);
    p=NULL;
    return 0;
}