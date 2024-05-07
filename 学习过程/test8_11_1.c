//求一个数存储在内存中的1的个数
#include <stdio.h>
int main()
{
    int count=0;
    int x=15;
    int y=x;
    while(x){
        if(x%2==1){
            count++;
        }
        x=x/2;
    }
    printf("%d存储再内存中有%d个1",y,count);
    return 0;
}