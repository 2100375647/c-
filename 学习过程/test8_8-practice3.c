//*绘制菱形
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++){
        for(j=1;j<=7-i;j++){
            printf(" ");
        }
        for(k=1;k<2*i;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<7;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=0;k<=10-2*i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
