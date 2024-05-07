/*文件操作
文件操作之前要先打开文件操作完成之后要关闭文件
文件的打开函数fopen，如果打开失败会返回一个空指针，打开成功会返回文件信息区的地址FILE*
函数原型：
    FILE *fopen( const char *filename, const char *mode )
参数含义：
    const char *filename：文件名
    const char *mode：文件的打开方式
        r:只读，文件必须存在，否则会打开失败
        w:写文件，如果文件存在会清空文件内容使文件变成一个空文件，如果打开失败会新建一个空文件 
        a:向文件末尾追加数据，如果文件不存在就会重新建立一个空文件
fclose文件关闭函数
函数原型：
    int fclose( FILE *stream )
参数含义：
    FILE *stream：文件信息去指针
*注：fclose关闭文件之后不会将指针置空
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("C:\\Users\\21003\\Desktop\\文件操作.txt","w");
    if(fp==NULL)
    {
        printf("文件打开失败！");
    }
    fclose(fp);
    fp=NULL;
    return 0;
}