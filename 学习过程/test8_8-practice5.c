//求一个十进制数的二进制中有几个1
//求出一个数二进制数中有几个1
#include <stdio.h>
int counts(int x)
{
    int count=0;
    int i=0;
    for(i=0;i<32;i++){
        if((x>>i)&1){
            count++;
        }
    }
    return count;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d的二进制数中有%d个1",x,counts(x));
    return 0;
}