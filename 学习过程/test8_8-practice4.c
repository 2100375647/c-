//找出数组中只出现过一次的元素
#include <stdio.h>
int singleNumber(int nums[], int numsSize)
{
    int n=0;
    int i=0;
    for(i=0;i<numsSize;i++){
        n=n^nums[i];//异或运算相同为0不同则为它本身
    }
    return n;
}
int main()
{
    int arr[]={1,2,3,4,5,1,2,3,4};
    int sz=(sizeof(arr)/sizeof(arr[0]));
    printf("%d",singleNumber(arr,sz));
    return 0;
}