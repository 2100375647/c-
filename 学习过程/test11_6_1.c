//springf函数
//将一串带有格式的数据存放在指定的字符串中
//sscanf函数
//从字符串中提取格式化数据
#include <stdio.h>
int main()
{
    char arr[20]={0};
    int a=190,c=1231;
    //将整形a,c转换成字符串存放到arr中
    sprintf(arr,"%d %d",a,c);
    printf("%s",arr);
    //从arr中读取格式化数字
    a=0,c=0;
    sscanf(arr,"%d%d",&a,&c);
    printf("\n%d %d",a,c);
    return 0;
}