//在指定的有序数组中查找指定元素--数组的遍历求法
#include <stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5,6,7};
    int k=0;
    int i=0;
    int find=0;
    printf("请输入所要查找的数字：");
    scanf("%d",&k);
    for(i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++){
        if(arr1[i]==k){
            printf("数字%d的下标是%d",k,i);
            find=1;
            break;
        }
    }
    if(find==0){
        printf("数字%d不在数组arr1中\n",k);
    }
    return 0;
}