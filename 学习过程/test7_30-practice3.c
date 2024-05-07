#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int b[]={7,8,9,10,11,12};
    int c=0,i=0,d=0,j=0,k=0;
    int sz=0;
    sz=sizeof(a)/sizeof(a[0]);
    for(i=0;i<sz;i++){
        c=a[i];
        d=b[i];
        b[i]=c;
        a[i]=d;
    }
    printf("a[]=");
    for(j=0;j<sz;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
    printf("b[]=");
    for(k=0;k<sz;k++){
        printf("%d ",b[k]);
    }
    return 0;
}