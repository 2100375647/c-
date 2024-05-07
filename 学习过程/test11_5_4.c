//fputs函数的使用
#include <stdio.h>
int main()
{
    FILE *pf=fopen("C:\\Users\\21003\\Desktop\\git-warehouse\\1.txt","w");
    if(pf==NULL){
        return -1;
    }
    else{
        char arr1[20];
        char arr2[20];
        scanf("%s",arr1);
        fputs(arr1,pf);
    }
    return 0;
}