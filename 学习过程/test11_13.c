#include <stdio.h>
#define MALLOC(n,type) (type*)malloc(n*sizeof(type))
int main()
{
    // int* a=(int*)malloc(10*sizeof(int));
    int* a=MALLOC(10,int);
    for(int i=0;i<10;i++){
        a=a+i;
    }
    for(int i=0;i<10;i++){
        printf("%d\n",*(a+i));
    }
    return 0;
}