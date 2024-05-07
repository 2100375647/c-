//柔性数组的另一种实现方式
#include <stdio.h>
#include <stdlib.h>
struct A
{
    int a;
    int *c;
};
int main()
{
    struct A s;
    struct A* p=(struct A*)malloc(sizeof(s));
    if(p==NULL){
        perror("malloc");
        return 1;
    }
    else{
        p->c=(int *)malloc(sizeof(int)*10);
        if(p->c==NULL){
            perror("malloc");
            return 2;
        }
        else{
            for(int i=0;i<10;i++){
                p->c[i]=i;
            }
            for(int i=0;i<10;i++){
                printf("%d ",p->c[i]);
            }
            free(p->c);
        p->c=NULL;
        free(p);
        p=NULL;
        }
        
    }
    return 0;
}