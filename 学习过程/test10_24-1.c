/*calloc函数动态内存分配
函数原型：void *calloc( size_t num, size_t size )
开辟一个数组，这个数组有num个元素，每个元素大大小为size
calloc申请的内存空间会被初始化成全0的数组
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //calloc申请一个10个整形的整型数组
    int *p=(int *)calloc(10,sizeof(int));
    //判断calloc是是否申请成功
    if(p==NULL){
        perror("calloc");
        return 1;
    }
    else{
        for (int i = 0; i < 10; i++)
        {
            printf("%d ",*(p+i));  
        }
    printf("\n");
    }
    //释放内存
    free(p);
    //将配指针置空防止产生野指针
    p=NULL;
    return 0;
}