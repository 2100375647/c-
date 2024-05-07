#include <stdio.h>
//迭代求第n个斐波那契数
int fib(int n)
{
    int a=1;
    int b=1;
    int c=1;
    if(n<=2){
        return c;
    }
    else{
        while(n>2){
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        return c;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}