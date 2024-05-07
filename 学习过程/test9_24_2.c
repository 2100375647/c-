//文件操作
//读取文件之前要先打开文件，如果文件要打开首先要保证文件存在，如果文件不存在，则会打开失败，fopen函数会返回NULL
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
    FILE* pf=fopen("add.txt","r");
    if(pf==NULL){
        printf("打开文件失败，错误原因是:%s",strerror(errno));
    }
    else{
        printf("文件打开成功");
    }
    return 0;
}