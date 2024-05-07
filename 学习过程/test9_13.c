#include <stdio.h>
int main()
{
    short s=10;
    int i=2;
    int n=sizeof(s=i+4);
    printf("%d\n",n);
    printf("%d",s);
    return 0;
}