#include <stdio.h>
int main()
{
    int x=0;
    int i,sum=0;
    printf("请输入0~9的正整数:");
    scanf("%d",&x);
    if(x<=9){
        for(i=0;i<5;i++){
            sum+=x;
            x=x*10+x%10;
        }
        printf("%d",sum);
    }
    else{
        printf("请重新输入！");
    }
    return 0;
}