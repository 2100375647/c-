//求十个数里的最大值
#include <stdio.h>
int main() {
    int numbers[10];
    int i, max;
    printf("请输入十个整数：\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    for (i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("最大值为：%d\n", max);
    return 0;
}