#include <stdio.h>
int main() {
    int n, i, old, new, total;
    n = 12;  // 一年的时间，单位为月

    old = 1;  // 初始有1对大兔子
    new = 0;  // 初始没有小兔子
    total = 1;  // 初始共有1对兔子

    for (i = 1; i <= n; i++) {
        new += old;  // 每个月大兔子可以生小兔子
        old = total - new;  // 更新大兔子的数量，等于之前总兔子数减去新生的小兔子数
        total += new;  // 更新总兔子的数量
    }

    printf("一年后共有 %d 只兔子\n", total*2);

    return 0;
}