//realloc函数对动态内存的调整
//函数原型：void *realloc( void *ptr, size_t new_size )
//ptr为要调整的内存的指针,size为调整之后ptr所指向内存空间的大小
//当ptr为空指针时realloc函数和malloc函数同样的效果
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* p = (int*)malloc(10*sizeof(int));
    if(p==NULL){
        perror("malloc");
    }
    else{
        for(int i=0;i<10;i++){
            *(p+i)=i;
            printf("%d ",p[i]);
        }
    }
    //调整动态申请内存的大小
    p=(int*)realloc(p,20*sizeof(int));
    for(int i=10;i<20;i++){
        printf("%d ",p[i]);
    }
    free(p);
    p=NULL;
    return 0;
}