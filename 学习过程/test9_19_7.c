//函数的递归模拟实现strlen()
#include <stdio.h>
size_t my_strlen(char* str)
{
    if(*str!='\0'){
        return 1+my_strlen(str+1);
    }
    else{
        return 0;
    }
}
int main()
{
    char a[]="asdfsdjdfhglkdjfh";
    int len=my_strlen(a);
    printf("%d",len);
    return 0;
} 