//stencpy函数的模拟实现
#include <stdio.h>
char* my_strcncat(char* str1,const char* str2,int num)
{
    char* ret=str1;
    while (*str1!='\0')
    {
        str1++;
    }
    for(int i=0;i<num;i++){
        *str1++=*str2++;
    }
    return ret;
}
int main()
{
    char arr1[]="&&&&&&&&&&";
    char arr2[]=".....";
    printf("%s",my_strcncat(arr1,arr2,3));
    return 0;
}