//对一个字符串进行左移操作
#include <stdio.h>
int main()
{
    int n;
    printf("请输入字符串要左旋的次数：");
    scanf("%d",&n);
    char x[]="ABCD";
    char* p=&x[0];
    for(int i=0;i<n;i++){
        int y;
        y=*p;
        *p=*(p+1);
        *(p+1)=*(p+2);
        *(p+2)=*(p+3);
        *(p+3)=y;
    }
    while(*p != '\0'){
        printf("%c",*p);
        p++;
    }
    return 0;
}