//对于一个定长数组进行逆序输出
#include <stdio.h>
int main()
{
    int arr[10];
    int i=0,j=0;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<10;j++){
        printf("%d ",arr[9-j]);
    }
    return 0;
}