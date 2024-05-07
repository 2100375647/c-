#include <stdio.h>
void init(int arr[], int sz)//数组归零函数
{
    int i = 0;
    for (i = 0; i < sz; i++) {
        arr[i] = 0;
    }
}
void print(int arr[], int sz)//数组打印函数
{
    int i = 0;
    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
}
void reverse(int arr[], int sz)//数组逆置函数
{
    int l = 0;
    int r = sz - 1;
    int temp = 0;
    while (l < r) {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8 };
    int sz = (sizeof(arr)) / (sizeof(arr[0]));
    print(arr, sz);
    printf("\n");
    reverse(arr, sz);
    print(arr, sz);
    printf("\n");
    init(arr, sz);
    print(arr, sz);
    printf("\n");
}