//构建一个简单的结构体
//结构体的基本框架
/*
struct 结构体名字(可以自定义)
{
    结构体成员列表,可以有多个成员
}结构体变量(全局变量);
*/
#include <stdio.h>

struct student
{
    char name[20];//名字
    int age;//年龄
    float score;//成绩
};

int main(void)
{
    struct student stu1 = {"张三", 20, 90.5};
    struct student stu2 = {"李四", 25, 80.5};
    struct student stu3 = {"王五", 30, 70.5};
    struct student stu4 = {"贾6", 35, 60.5};
    printf("名字:%s,年龄：%d",stu1.name, stu1.age);
    return 0;
}