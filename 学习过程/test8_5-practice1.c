//递归求n的k次方
#include <stdio.h>
int cf(int n,int k)
{
    if(k==1)
        return n;
    else{
        return n*cf(n,k-1);
    }
}
int main()
{
    int n=0;
    int k=0;
    scanf("%d%d",&n,&k);
    printf("%d",cf(n,k));
    return 0;
}