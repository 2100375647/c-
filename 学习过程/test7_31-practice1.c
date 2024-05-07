#include <stdio.h>

void zf(int x){
    char arr[x][x];
    int i=0,j=0;
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            arr[i][j]='*';
        }
    }
    for(i=1;i<x-1;i++){
        for(j=1;j<x-1;j++){
            arr[i][j]=' ';
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