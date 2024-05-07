#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i==j){
                continue;
            }
            if(*(nums+i)+*(nums+j)==target){
                int arr[]={i,j};
                returnSize=arr;
            }
        }
    }
    return returnSize;
}
int main(){
    int nums[]={2,7,11,15},target=9,numsSize=4;
    int* returnSize;
    for(int i=0;i<2;i++){
        printf("%d ",*(twoSum(nums,numsSize,target,returnSize)+i));
    }
    return 0;
}