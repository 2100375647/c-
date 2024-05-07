//函数strncpy的模拟实现
#include <stdio.h>
char* my_strncpy(char* str1,const char* str2,int num)
{
    char* ret=str1;
    for(int i=0;i<num;i++){
        *str1++=*str2++;
    }
    *str1='\0';
    return ret;
}
int main()
{
    char arr1[]="&&&&&&&&&&&";
    char arr2[]="***********";
    printf("%s",my_strncpy(arr1,arr2,3));
    return 0;
}