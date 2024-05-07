//for循环
#include <stdio.h>
int main()
{
    int i,sum;
    for(i=0;i<=100;i++)
    {
        if(i%3==0)
            sum+=i;
    }
    printf("%d",sum);
    return 0;
}