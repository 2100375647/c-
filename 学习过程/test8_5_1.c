#include <stdio.h>
int Fun(int n)      
{
  if(n==5)   
    return 2;
  else
    return 2*Fun(n+1);      
}
int main()
{
    int x=0;
    scanf("%d",&x);
    printf("%d",Fun(x));
    return 0;
}