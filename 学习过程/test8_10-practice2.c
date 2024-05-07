#include <stdio.h>
int Different_digit(int x,int y)
{
    int i=0;
    int count=0;
    int tmp=x^y;
    for(i=0;i<32;i++){
        if((tmp>>i)&1){
            count++;
        }
    }
    return count;
}
int main()
{
    int x;
    int y;
    scanf("%d%d",&x,&y);
    printf("%d和%d的二进制数有%d位不同",x,y,Different_digit(x,y));
    return 0;
}