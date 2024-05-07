//迭代求介乘
#include <stdio.h>
int main()
{
    int x=0;
    scanf("%d",&x);
    int sun=x;
    for(int i=x-1;i>=1;i--){
        sun*=i;
    }
    printf("%d",sun);
    return 0;
}