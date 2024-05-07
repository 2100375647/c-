//将字符串中的小写字母变成大写字母
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[]="i am FFFF";
    int len =strlen(str);
    for(int i=0;i<len;i++){
        if(islower(str[i])){
            str[i]=str[i]-32;
        }
    }
    for (int i=0; i < len; i++){
        printf("%c",str[i]);
    }
    return 0;
}