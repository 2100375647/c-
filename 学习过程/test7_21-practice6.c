#include <stdio.h>
int main()
{
    int a,b,i=0,j=0;
    scanf("%d\n%d",&a,&b);
    for(i=0;i<=a;i++){
        printf("*");
    }
    printf("\n");
    for(j=0;j<=b;j++){
        printf("*");
    }
    return 0;
}