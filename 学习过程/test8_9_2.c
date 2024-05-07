//指针访问数组
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int* p=&arr[0];
    int sz=(sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<sz;i++){
        printf("%d ",*p);//*p指针变量的解引用,打印指针p指向的数据--（int*指针变量的类型)
        p+=1;
    }
    return 0;
}