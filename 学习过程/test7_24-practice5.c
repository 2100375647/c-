//分数求和
#include <stdio.h>
int main()
{
    int i;
    double sum;
    for(i=2,sum=1.0;i<=100;i++){
        sum = sum + (1.0/i);
    }
    printf("%f\n",sum);
    return 0;
}