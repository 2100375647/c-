//strstr函数在一个字符串中查找一个子字符串，如果子字符串在这个字符串中就会返回这个字符串第一次出现的地址
//函数原型：
//char* strstr(const char* arr1,const char* arr2)
//如果字符串arr2在arr1中出现就会返回arr1第一次出现的位置
//如果字符串arr2在arr1中没有出现就会返回空指针
#include <string.h>
#include <stdio.h>
int main()
{
    char arr1[]="1111111115198237190837";
    char arr2[]="5";
    char* s=strstr(arr1,arr2);
    if(s==NULL){
        printf("找不到");
    }
    else{
        printf("找到了");
    }
    return 0;
}