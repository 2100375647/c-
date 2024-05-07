//杨辉三角
#include <stdio.h>
int main()
{
    int arr[10][10]={1};
    int i=0;
    int j=0;
    for(i=1;i<10;i++){
        for(j=1;j<=i;j++){
            if(i==1 || j==i)
                arr[i][j]=1;
            else
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}