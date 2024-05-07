//用递归求整数每一位数的和
#include <stdio.h>
int print(int n)
{
    if(n<10){
        return n;
    }
    else{
        return n%10+print(n/10);
    }
}
int main()
{
    int x=0;
    scanf("%d",&x);
    printf("%d",print(x));
    return 0;
}