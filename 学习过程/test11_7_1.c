/*文件读取结束的判定
feof - 当文件读取结束的时候判断文件读取的结束结束原因是否是遇到文件末尾
    函数原型:
        int feof( FILE *stream )
    参数:
        stream:文件指针
ferror
*/
#include <stdio.h>
int main()
{
    FILE *pf = fopen("C:\\Users\\21003\\Desktop\\git-warehouse\\data1.txt", "r");
    if (pf == NULL)
    {
        perror("fopen");
        return -1;
    }
    else
    {
        char str[100];
        while (fgets(str, sizeof(str), pf) != NULL)
        {
            printf("%s", str);
        }
        if (feof(pf))
        {
            printf("\n文件已结束");
        }
    }
    fclose(pf);
    pf = NULL;
    return 0;
}