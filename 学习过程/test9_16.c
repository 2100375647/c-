//统计数组中出现一次的元素
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,1,2,3,4,6};
    int sz=sizeof(arr)/sizeof(arr[0]);
    printf("数组arr中指出现一次的元素有:");
    for(int i=0;i<sz;i++){
        int count=0;
        for(int j=0;j<sz;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
                printf("%d ",arr[i]);
        }
    }
    return 0;
}