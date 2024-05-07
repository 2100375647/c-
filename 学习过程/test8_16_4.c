//指针数组模拟二维数组
#include <stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4,5,6};
    int arr3[]={3,4,5,6,7};
    int* par[]={arr1,arr2,arr3};//数组名就是数组首元素的地址，同时数组首元素的地址也是数组的地址
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",par[i][j]);
        }
        printf("\n");
    }
    return 0;
}