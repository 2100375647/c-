//输出一个数二进制的偶数位和奇数位
#include <stdio.h>
void jsw(int x)
{
    int arr[16];
    int i=0;
    for(i=0;i<16;i++){
        if(((x>>2*i)&1==1)){
            arr[15-i]=1;
        }
        else{
            arr[15-i]=0;
        }
    }
    for(i=0;i<16;i++){
        printf("%d",arr[i]);
    }
}
void osw(int x)
{
    int arr1[16];
    int i=0;
    x=x>>1;
    for(i=0;i<16;i++){
        if(((x>>2*i)&1==1)){
            arr1[15-i]=1;
        }
        else{
            arr1[15-i]=0;
        }
    }
    for(i=0;i<16;i++){
        printf("%d",arr1[i]);
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d的奇数位是:",x);
    jsw(x);
    printf("\n");
    printf("%d的偶数位是:",x);
    osw(x);
    return 0;
}