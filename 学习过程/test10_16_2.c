#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4};
    int *p1 = (int *)(&a + 1);
    int *p2 = (int *)((int)a + 1);
    printf("%x\n", *(p1 - 1));
    printf("%x\n", *p2);
    return 0;
}