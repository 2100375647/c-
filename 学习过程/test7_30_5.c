//二分法在指定数组中查找指定元素
#include <stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int l = 0;
    int r = (sizeof(arr1)/sizeof(arr1[0]))-1;
    int k = 0;
    int find=0;
    printf("请输入你想要查找的数字:");
    scanf("%d",&k);
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr1[mid]<k){
            l=mid+1;
        }
        else if(arr1[mid]>k){
            r=mid-1;
        }
        else{
            printf("找到了，下标是%d",mid);
            find=1;
            break;
        }
    }
    if(find==0){
        printf("数字%d在数组arr1中找不到\n",k);
    }
    return 0;
}