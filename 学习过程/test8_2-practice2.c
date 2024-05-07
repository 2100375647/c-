#include <stdio.h>
void StatCharCount(char str[])
{
    int zm=0;//字母
    int sz=0;//数字
    int kg=0;//空格
    int qt=0;//其他字符
    for(int i=0;str[i];i++){
        if(str[i]>='0' && str[i]<='9'){
            sz++;
        }
        else if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')){
            zm++;
        }
        else if(str[i]==' '){
            kg++;
        }
        else{
            qt++;
        }
    }
    printf("共有%d个字母字符\n",zm);
    printf("共有%d个数字字符\n",sz);
    printf("共有%d个空格字符\n",kg);
    printf("共有%d个其他字符\n",qt);
}
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    StatCharCount(str);
    return 0;
}