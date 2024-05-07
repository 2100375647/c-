//strcmp函数的模拟实现
#include <stdio.h>
int my_strcmp(const char* arr1,const char* arr2)
{
    while(*arr1==*arr2){
        if(*arr1=='\0'){
            return 0;
        }
        arr1++;
        arr2++;
    }
    return *arr1-*arr2;
}
int main()
{
    char arr1[]="abc";
    char arr2[]="ace";
    printf("%d",my_strcmp(arr1,arr2));
    return 0;
}