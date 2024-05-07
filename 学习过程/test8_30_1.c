//简单计算器的实现
#include <stdio.h>
void menu()
{
	printf("**********************\n");
	printf("**** 1.加法 2.减法 ***\n");
	printf("**** 3.乘法 4.除法 ***\n");
	printf("****   0.退出     ****\n");
	printf("**********************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sud(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void calc(int* p1,int* p2,int(*def)(int ,int))
{
    printf("请输入两个操作数>");
	scanf("%d%d", p1, p2);
    int ret = (*def)(*p1,*p2);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	int x = 0, y = 0;
    int (*parr[])(int,int)={add,sud,mul,div};
	do 
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		case 2:
		case 3:
		case 4:
            calc(&x,&y,parr[input-1]);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}