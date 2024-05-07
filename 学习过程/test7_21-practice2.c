#include <stdio.h>
int main()
{
    int a,b,s1,s2;
    scanf("%d%d",&a,&b);
    s1 = a / b;
    s2 = a % b;
    printf("%d %d",s1,s2);
    return 0;
}