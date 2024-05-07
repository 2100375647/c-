//结构体的创建及其使用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu//结构体的声明
{
    char name[10];
    int age;
};
int cmp_stu_by_age(const void* e1,const void* e2)
{
    return ((struct stu*)e1)->age-((struct stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1,const void* e2)
{
    return strcmp(((struct stu*)e1)->age,((struct stu*)e2)->age);
}
int mian()
{
    struct stu s[3] = {{"张三",19},{"李四",20},{"王麻子",21}};//定义结构体变量
    int sz = sizeof(s)/sizeof(s[0]);
    qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);//按照年龄对结构体数据进行排序
    qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);//按照名字顺序进行排序
    return 0;
}