#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    char arr1[]="welcome to shanxi!";
    char arr2[]="******************";
    int left=0;
    int right=strlen(arr1)-1;
    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);//程序休眠函数，单位是毫秒，依赖于头文件<windows.h>
        system("cls");//用来执行系统命令
        left++;
        right--;
    }
    printf("%s\n",arr2);
    return 0; 
}