//冒泡排序对任意数据类型进行比较
#include <stdio.h>
#include <string.h>
//比较函数 - 自定义比较函数
struct stu
{
    char name[20];
    int age;
};
int cmp(const void* e1,const void* e2)
{
    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
//交换函数
void swap(char* e1,char*e2,int width)
{
    for(int i=0;i<width;i++){
        char tmp=*e1;
        *e1=*e2;
        *e2=tmp;
        e1++;
        e2++;
    }
}
void bubble_sort(void* bast,int sz,int width,int (*cmp)(const void* e1,const void* e2))
{
    for(int i=0;i<sz-1;i++){
        for(int j=0;j<sz-1-i;j++){
            if(cmp((char*)bast+j*width,(char*)bast+(j+1)*width)>0){
                swap((char*)bast+j*width,(char*)bast+(j+1)*width,width);
            }
        }
    }
}
int main()
{
    int arr[]={10,1,2,3,4,5,6};
    int sz1=sizeof(arr)/sizeof(arr[0]);
    struct stu arr2[]={{"zhangsan",21},{"lisi",20},{"wangmazi",30}};
    int sz2=sizeof(arr2)/sizeof(arr2[0]);
    bubble_sort(arr2,sz2,sizeof(arr2[0]),cmp);
    for(int i=0;i<sz2;i++){
        printf("%s ",arr2[i].name);
        printf("%d\n",arr2[i].age);
    }
}