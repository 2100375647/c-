#include <stdio.h>
//顺序表数据结构的实现
#define MAX_NAME 100
#define MAX_PHONE_NUM 20
#define MAX_GENDER 100

typedef struct ListNode
{
    char name[MAX_NAME];//名字
    int age;//年龄
    char gender[MAX_GENDER];//性别
    char phone_num[MAX_PHONE_NUM];//电话号码
}cinfo;
typedef struct sqllist
{
    int size;//当前通讯录中的联系人个数
    cinfo *a;
    int maxsize;//通讯录中最多的联系人个数
}sqllist;
int index(sqllist *l){
    printf("请输入名字:");
    char name[MAX_NAME];
    scanf("%s",&name);
    for(int i=0;i<l->size;i++){
        if(l->a[i].name==name){
            return i;
        }
    }
    printf("这个联系人不在通讯录内！\n");
    return -1;
}