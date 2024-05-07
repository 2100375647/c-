//模拟实现memmove函数
#include <stdio.h>
void* my_memmove(void* s1,void* s2,size_t num)
{
    void* ret=s1;
    if(s1<s2){
        while (num--)
        {
            *(char*)s1=*(char*)s2;
            s1=(char*)s1+1;
            s2=(char*)s2+1;
        }
    }
    else{
        while (num--){
            *((char*)s1+num)=*((char*)s2+num);
        }
    }
    return ret;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int sz=sizeof(arr)/sizeof(arr[0]);
    my_memmove(arr+2,arr,20);
    for(int i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}