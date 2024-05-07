//fgetc读取文件 - 当fgetc读取失败时会返回一个EOF
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("C:\\Users\\21003\\Desktop\\git-warehouse\\1.txt","r");
    if(fp==NULL){
        return -1;
    }
    else{
        for(int i=0;i<2;i++){
            printf("%c",fgetc(fp));
        }
    }
    fclose(fp);
    fp=NULL;
    return 0;
}