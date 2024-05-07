//冒泡排序
#include <stdio.h>
void sort(int arr[],int sz)//排序函数
{
    int i=0;
    for(i=0;i<sz-1;i++){
        //一趟冒泡排序
        int flag=1;//假设数组是有序的
        int j=0;
        for(j=0;j<sz-1-i;j++){
            if(arr[j]>arr[j+1]){
                //交换
                int tmp;
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;//数组进行交换了说明数组不是有序的
            }    
        }
        if(flag==1){
            break;
        }
    }
}
void print(int arr[],int sz)//数组输出函数
{
    int i;
    for(i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[10];
    int sz=sizeof(arr)/sizeof(arr[0]);//计算数组的元素个数
    for(int i=0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,sz);
    print(arr,sz);
    return 0;
}