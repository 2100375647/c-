#include <stdio.h>
#include <stdlib.h>
int a[1000];
int cmp(int* p1, int* p2)
{
    return *p2 - *p1;
}
int main()
{
    int i;
    int* arr1=&a;
    scanf("%d", &i);
    for (int z = 0; z < i; z++) {
        scanf("%d", arr1+z);
    }
    qsort(arr1,i,sizeof(int),cmp);
    for(int z=i-1;z>=0;z--){
        printf("%d ",*(arr1+z));
    }
    printf("\n");
    for (int z = 0; z < i; z++) {
        printf("%d ", *(arr1+z));
    }
    return 0;
}