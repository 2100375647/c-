//fgets函数的使用
//函数原型：
//char *fgets( char *str, int count, FILE *stream )
//参数：count 所要读取的字符个数   str  读取字符的存储地址
#include <stdio.h>
int main()
{
    FILE *pf=fopen("C:\\Users\\21003\\Desktop\\git-warehouse\\1.txt","w");
    if(pf==NULL){
        return -1;
    }
    else{
        char arr[10];
        fgets(arr,4,pf);
        printf("%s",arr);
    }
    return 0;
}