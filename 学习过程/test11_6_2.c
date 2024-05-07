//文件指针的随机读写,及文件指针读取指定位置的
/*
fseek函数 - 将文件指针跳转到任意位置
    函数原型：
        int fseek( FILE *stream, long offset, int origin )
    参数：
        stream:流
        offset:文件指针的偏移量
        origin:文件指针的开始位置   
            SEEK_SET 文件的开头    
            SEEK_CUR 文件指针的当前位置   
            SEEK_END 文件的末尾
ftell函数 - 用来返回文件指针相对于文件开始的偏移量
    函数原型:
        long ftell( FILE *stream )
    参数:
        stream:文件指针
rewind函数 - 将文件指针重置到文件的初始位置
*/
#include <stdio.h>
int main()
{
    //文件指针的定义和文件的打开
    FILE *pf=fopen("C:\\Users\\21003\\Desktop\\git-warehouse\\data1.txt","r");
    if(pf==NULL){
        perror("fopen");
        return -1;
    }
    fseek(pf,3,SEEK_SET);//设置文件指针的偏移量
    char ch[20];
    fgets(ch,20,pf);
    printf("%s",ch);
    int x=ftell(pf);//返回文件指针相对于文件开始的偏移量
    printf("\n%d",x);
    rewind(pf);//将文件指针返回到起始位置
    fclose(pf);
    pf=NULL;
    return 0;
}