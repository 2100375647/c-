#include <stdio.h>
void set_arr(int arr[],int sz)//函数传参--参数为数组的时候应该写成--数组名[数组的大小]--数组的大小可以省略
{
    //将数组arr中的元素全部改写成-1
    int i=0;
    for(i=0;i<sz;i++){
        arr[i]=-1;
    }
}
void print_arr(int arr[],int sz)
{
    //自定义函数对数组arr进行遍历并打印数组arr中的所有元素
    int i=0;
    for(i=0;i<sz;i++){
        printf("%d ",arr[i]);
    } 
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);
    set_arr(arr,sz);
    print_arr(arr,sz);
    return 0;
}