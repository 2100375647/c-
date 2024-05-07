//判断三角形形状
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if((((a+b>c) || (a+c>b) || (b+c>a)) && ((a-b<c) || (a-c<b) || (b-c<a))) && (a>0) && (b>0) &&(c>0)){
        if((a==b) || (a==c) || (b==c))
            printf("等腰三角形");
        else if((a==b)&&(b==c))
            printf("等边三角形");
        else
            printf("其他三角形");
    }
    else{
		printf("不能构成三角形");
	}
    return 0;
}