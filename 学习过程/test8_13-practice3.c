//字符串的逆序
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char x1[]="123456789";
    int len=strlen(x1);
    char x2[len+1];
    printf("逆序前的字符串是:");
    for(i=0;i<=len;i++){
        printf("%c",x1[i]);
    }
    printf("\n");
    for(i=0;i<=len;i++){
        x2[len-i]=x1[i];
    }
    printf("逆序之后的字符串是:");
    for(i=0;i<=len;i++){
        printf("%c",x2[i]);
    }
    return 0;
}