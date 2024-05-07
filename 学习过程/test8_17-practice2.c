//调整数组使所有奇数在前半部分，所有偶数在后半部分
#include <stdio.h>
void Swag(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len; i++){
		if ((arr[i] % 2 )==0)
			for (j = i + 1; j < len; j++){
				int temp;
				if ((arr[j] % 2) == 1){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					break;
				}	
			}
	}
}
void print(int arr[],int len)
{
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
    int sz=sizeof(arr) / sizeof(arr[0]);
	Swag(arr, sz);
	print(arr,sz);
	return 0;
}