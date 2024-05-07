//绘制乘法表
#include <stdio.h>
void cf(int x)
{
    int i, j;
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            printf("%d*%d=%d ",i,j,i*j);
        }
        printf("\n");
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    cf(x);
    return 0;
}