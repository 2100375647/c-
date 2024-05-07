//自定义函数对二维数组进行遍历并打印
#include <stdio.h>
void print_arr(int arr[][5],int h, int l)//二维数组传参时可以省略行不能省略列
{
    int i=0;
    int j=0;
    for(i=0;i<h;i++){
        for(j=0;j<l;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    print_arr(arr,3,5);
    return 0;
}