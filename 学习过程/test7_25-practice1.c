//求水仙花数
#include <stdio.h>
int main()
{
    int i;
    for(i=100;i<1000;i++){
        int a = i % 10;//个位
        int b = i / 100;//百位
        int c = i / 10 %10;//十位
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
            printf("%d\n",i);
    }
    return 0;
}