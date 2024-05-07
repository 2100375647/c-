// 模拟实现memcpy函数
#include <stdio.h>
void my_memcpy(void *s1, const void *s2, size_t num)
{
    while (num)
    {
        *(char *)s1 = *(char *)s2;
        s1 = (char *)s1 + 1;
        s2 = (char *)s2 + 1;
        num--;
    }
}
int main()
{
    int arr1[10] = {0};
    int arr2[] = {1, 2, 3, 4, 5};
    my_memcpy(arr1, arr2, 20);
    for (int i = 0; i < (int)(sizeof(arr1)/sizeof(arr1[0])); i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}