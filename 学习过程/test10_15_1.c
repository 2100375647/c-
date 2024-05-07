//判断数字在内存中的存储方式
#include <stdio.h>
int check_sys()
{
    int a=1;
    return *(char*)&a;
}
int main()
{
    if(check_sys()==1){
        printf("小端");
    }
    else{
        printf("大端");
    }
    return 0;
}