//二分法在指定数组中查找指定元素
#include <stdio.h>
int bin_search(int arr[], int left, int right, int key)
{
    int find=0;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]<key){
            left=mid+1;
        }
        else if(arr[mid]>key){
            right=mid-1;
        }
        else{
            find=1;
            return mid;
        }
    }
    if(find==0){
        return -1;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int r=(sizeof(arr)/sizeof(arr[0]))-1;
    int l=0;
    int k=0;
    scanf("%d",&k);
    printf("%d",bin_search(arr,l,r,k));
    return 0;
}