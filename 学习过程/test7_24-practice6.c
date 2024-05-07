//1到100 9的出现次数
#include <stdio.h>
int main() {
    int count = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 9) { 
                count++;
            }
            num /= 10; 
        }
    }

    printf("1到100的所有整数中出现数字9的次数为:%d\n", count);

    return 0;
}