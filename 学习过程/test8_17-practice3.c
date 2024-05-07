//对一个字符串进行左移操作
#include <stdio.h>
#include <string.h>
int my_fun(char arr1[],char arr2[])
{
    char* p1=&arr1[0];
    for(int i=0;i<5;i++){
        int y;
        y=*p1;
        *p1=*(p1+1);
        *(p1+1)=*(p1+2);
        *(p1+2)=*(p1+3);
        *(p1+3)=*(p1+4);
        *(p1+4)=y;
        if(strcmp(arr1,arr2)==0){
            return 1;
        }
    }
    return 0;
}
int main()
{
    char arr1[]="AABBC";
    char arr2[]="BBCAA";
    if(my_fun(arr1,arr2)==1){
        printf("字符串s2是由s1旋转而来的");
    }
    else{
        printf("字符串s2不是由s1旋转而来的");
    }
    return 0;
}