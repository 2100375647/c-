#include <stdio.h>

int main()
{
    int m = 0;
    int n = 0;
    int tmp = 0;
    printf("请输入两个整数: ");
    scanf("%d %d", &m, &n);

    while (tmp = m % n)
    {
        m = n;
        n = tmp;
    }
    printf("最大公约数为:%d\n", n);
    return 0;
}
