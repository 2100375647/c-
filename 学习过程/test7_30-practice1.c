//输入指定数量的元素放入数组并求平均值
#include <stdio.h>
int main()
{
    int arr1[10];
    int i;
    int a=0;
    float sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&a);
        arr1[i]=a;
    }
    for(int j=0;j<10;j++){
        sum+=arr1[j];
    }
    printf("%.2f",sum/10);
    return 0;
}