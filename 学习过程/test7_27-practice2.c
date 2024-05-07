//判断素数
/*sqrt()开平方的库函数函数
    包含在<math.h>的头文件中
*/
#include <stdio.h>
int main()
{
    int i;
    int j;
    int a=1;
    int b=0;
    printf("100至200的素数为:\n");
    for(i=100;i<=200;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                a=0;
                break;
            }
            else{
                a=1;
            }
        }
        if (a == 1){
            printf("%d ",i);
            b++;
        }        
    }
    printf("\n100至200的素数个数为:\n%d",b);
    return 0;
}