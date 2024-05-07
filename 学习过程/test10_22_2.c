#include <stdio.h>
struct gift
{
    //共用属性
    int inventory;
    double price;
    int  Product_Type;
    union
    {
        struct
        {
            char title[100];
            char author[100];
            int Number_of_pages;
        }book;//书
        struct 
        {
            char design[100];
        }mug;//杯子
        struct 
        {
            char color[100];
            char design[100];
            int size;
        }shirt;//衬衫
    }item;//特殊属性
};
int main()
{
    return 0;
}