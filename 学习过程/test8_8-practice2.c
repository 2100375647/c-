//一瓶汽水一块钱，两个汽水瓶子换一瓶汽水，问20圆可以买多少汽水？
#include<stdio.h>
int main()
{
    int money = 20;
    int empty = 0;
    int total = 0;
    //买回来的汽水喝掉
    total = money;
    empty = money;
    while (empty>=2)
    {
        total += empty / 2;//用空瓶子换的汽水
        empty = empty / 2 + empty % 2;//换的汽水喝完后的瓶子+之前剩的瓶子
    }
    printf("%d", total);
    return 0;
}