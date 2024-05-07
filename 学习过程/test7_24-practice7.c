//打印100至200之间的素数
#include <stdio.h>
int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    printf("100到200之间的素数有:\n");
    for (int i = 100; i <= 200; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}