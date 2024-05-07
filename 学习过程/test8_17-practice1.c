//对数组arr进行打印
#include <stdio.h>
void print(int* arr[],int sz)
{
    int i=0;
    int* p=arr;
    for(i=0;i<sz;i++){
        printf("%d ",*(p+i));
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int sz=sizeof(arr)/sizeof(arr[0]);
    print(arr,sz);
    return 0;
}