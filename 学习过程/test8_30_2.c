//用指针数组 - 转移表实现简单的计算器
#include <stdio.h>
void menu()
{
	printf("**********************\n");
	printf("**** 1.add 2.sud  ****\n");
	printf("**** 3.mul 4.div  ****\n");
	printf("****   0.exit     ****\n");
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
int main()
{
    int input,x,y,ret;
    //函数指针数组
    //转移表
    int (*parr[])(int,int)={add,sud,mul,div};
    do{
        menu();
        printf("请选择>");
        scanf("%d",&input);
        if(input>0 && input<5){
            printf("请输入两个操作数>");
            scanf("%d%d",&x,&y);
            ret=parr[input-1](x,y);
            printf("%d\n",ret);
        }
        else if(input==0){
            printf("退出计算器\n");
            break;
        }
        else{
            printf("输入错误,请重新选择\n");
        }
    }while(input);
    return 0;
}