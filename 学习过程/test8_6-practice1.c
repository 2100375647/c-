#include <stdio.h>
int Statistics(int a)
{
    int unt=1;
    while(a>9){
        a=a/10;
        unt++;
    }
    return unt;
}
int power(int n,int k)
{
    int power=1;
    if(n==0){
        return 0;
    }
    for(int i=1;i<=k;i++){
        power*=n;
    }
    return power;
}
int daffodil(int x)
{
    int digit = Statistics(x);
    int i=0;
    int sum=0;
    for(i=0;i<digit;i++){
        int y=x%10;
        sum+=power(y,digit);
        x=x/10;
    }
    if(x==sum){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int i=0;
    for(i=0;i<10000;i++){
        if(daffodil(i)==1){
            printf("%d ",i);
        }
    }
    return 0;
}