//文件的顺序读写
//fgetc:字符输入函数，一次只能读取一个字符
//fputc:字符输出函数，一次写一个字符，该函数是由于所有流
    //**流：stdin标注输入流，stdout标准输出流
//fgets:字符串输入函数，一次读取一行字符串
//fputs:字符输出函数，一次输出一行数据
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("1.txt", "w");//以写入的方式打开文件
    //判断是否成功打开文件
    if (fp == NULL){
        perror("fail to open file");
        return 1;
    }
    else{
        scanf("%c", &ch);
        fputc(ch, fp);
    }
    fclose(fp);
    fp=NULL;
    return 0;
}