#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "My_header _file.h"
void menu(){
    printf("--------------通讯录---------------\n");
    printf("----1.打开通讯录--------2.查找联系人\n");
    printf("----3.添加联系人--------4.删除联系人\n");
    printf("-----------------------------------\n");
    printf("请输入你想要做的操作(输入0退出)>>");
}
//通讯录初始化函数
void InitList(sqllist *l){
    l->a=(cinfo *)malloc(sizeof(cinfo)*4);
    l->size=0;
    l->maxsize=4;
}
//通讯录的销毁函数
void DestroyList(sqllist *l){
    free(l->a);
    l->a=NULL;
    l->maxsize=l->size=0;
}
//通讯录联系人的查找函数(名字查找函数)
int Slindex(sqllist *l){
    char name[MAX_NAME];
    printf("请输入你想要查找的联系人名字：");
    scanf("%s",&name);
    for(int i=0;i<l->size;i++){
        if(name==l->a[i].name){
            printf("这个联系人在通讯录中，具体信息如下：\n");
            printf("名字:%s 电话号码:%s 年龄:%d 性别:%s \n",l->a[i].name,l->a[i].phone_num,l->a[i].age,l->a[i].gender);
        }
    }
    printf("这个联系人不在通讯录中");
}
//通讯录添加联系人
void Add_data(sqllist *l){
    if (l->size == l->maxsize){
        l->a = (cinfo *)realloc(l->a, l->maxsize * 2 * sizeof(cinfo));
        if(l->a=NULL){
            perror("realloc:");
        }
        l->maxsize*=2;
    }
    char name1[MAX_NAME];//名字
    int age1;//年龄
    char gender1[MAX_GENDER];//性别
    char phone_num1[MAX_PHONE_NUM];//电话号码
    printf("请输入名字:");
    scanf("%s",&name1);
    printf("请输入年龄:");
    scanf("%d",&age1);
    printf("请输入性别:");
    scanf("%s",&gender1);
    printf("请输入电话号码");
    scanf("%s",&phone_num1);
    
}
//联系人删除函数
void Delete_data(sqllist *l){
    int x=index(l);
    if(x<0 || x>l->size){
        return -1;
    }
    else{
        for(int i=x;i<l->size-1;i++){
            l->a[i]=l->a[i+1];
        }
    l->size--;
    }
}
int main()
{
    sqllist l;
    InitList(&l);
    int input;
    do
    {
        menu();
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            for(int i=0;i<l.size;i++){
                printf("名字:%s 电话号码:%s 年龄:%d性别:%s\n",i,l.a[i].name,l.a[i].phone_num,l.a[i].age,l.a[i].gender);
            }
            break;
        case 2:
            Slindex(&l);
            break;
        case 3:
            Add_data(&l);
            break;
        case 4:
            Delete_data(&l);
            break;
        case 0:
            printf("欢迎下次使用！");
            break;
        }
    } while (input);
    return 0;
}