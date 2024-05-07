//二维数组的创建--二维数初始化行可以省略，列不可省略
//二位数组在内存中也是连续存储的
#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int arr1[2][3]={1,2};
    int arr2[2][4]={2,3,4};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%p ",&arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}