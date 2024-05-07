//递归求第n个斐波那契
#include <stdio.h>
int fib(int a)
{
    if(a<=2){
        return 1;
    }
    else{
        return fib(a-2)+fib(a-1);
    }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}