//输出100以内3的倍数
#include <stdio.h>
int main()
{
    int i=1;
    for(i=1;i<=100;i++){
        if(i%3==0)
        printf("%d ",i);
    }
    return 0;
}