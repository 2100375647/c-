// strstr函数的模拟实现
#include <stdio.h>
#include <assert.h>
char* my_strstr(const char* str1, const char* str2)
{
    assert(str1);
    assert(str2);
    const char *s2 = NULL;
    const char *s1 = NULL;
    const char *cp = str1;
    if(*str2=='\0'){
        return (char*)str1;
    }
    while (*cp)
    {
        s1 = cp;
        s2 = str2;//记录str2的起始位置方便s2之后匹配不成功返回开始重新开始匹配
        if(*str1=='\0'){
            return str1;
        }//如果str1是一个空字符串就会直接返回str1
        while ((*s1 == *s2) && *s1 && *s2)
        {
            s1++;
            s2++;
        }
        //当s2指针指向'\0'时就代表字符串str2已经全部匹配完成
        if (*s2 == '\0') {
            return (char*)cp;
        }
        cp++;
    }
}
int main()
{
    char arr1[] = "kasjdhgfkasjhdgfkajshdg";
    char arr2[] = "jdh";
    char *s = my_strstr(arr1, arr2);
    printf("%s", s);
    return 0;
}