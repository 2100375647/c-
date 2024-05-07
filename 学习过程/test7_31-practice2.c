#include <stdio.h>

void zf(int x){
    char arr[x][x];
    int i=0,j=0;
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            if(i==j){
                arr[i][j]='*';
            }
            else if(j==x-i-1){
                arr[i][j]='*';
            }
            else{
                arr[i][j]=' ';
            }
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int a;
    while(scanf("%d",&a)!=EOF){
        zf(a);
    }
    return 0;
}