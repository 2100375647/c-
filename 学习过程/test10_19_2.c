//结构体传参
#include <stdio.h>
struct student
{
    int num;
    char name[20];
};
void print1(struct student stu)
{
    printf("学号:%d\n姓名:%s\n",stu.num,stu.name);
}
void print2(struct student *p)
{
    printf("学号:%d\n姓名:%s\n",p->num,p->name);
}
int main()
{
    struct student stu={10,"张三"};
    struct student *p=&stu;//结构体指针
    print2(p);//传址调用
    print1(stu);//传值地址
    return 0;
}