// 动态顺序表的实现
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int ElemType; // 对顺序表存储的数据类型进行重命名方便之后顺序表的使用
typedef struct SeqList
{
    ElemType *a;
    int size;    // 顺序表中的有效元素个数
    int maxsize; // 当前顺序表的空间大小
} SeqList;
// 顺序表的初始化函数
void InitList(SeqList *L)
{
    L->a = (ElemType *)malloc(sizeof(ElemType) * 4);
    L->size = 0;
    L->maxsize = 4;
}
// 顺序表的销毁函数
void DestroyList(SeqList *L)
{
    free(L->a);
    L->a = NULL;
    L->size = L->maxsize = 0;
}
// 尾部插入
void slpushback(SeqList *L, ElemType x)
{
    assert(L != NULL);
    if (L->size == L->maxsize)
    {
        // 空间不足以再插入另一个数据
        ElemType *tmp = (ElemType *)realloc(L->a, L->maxsize * 2 * sizeof(ElemType));
        if (tmp == NULL)
        {
            perror("realloc fail!");
        }
        else
        {
            L->a = tmp;
            L->maxsize *= 2;
        }
        free(tmp);
        tmp = NULL;
        L->a[L->size++] = x;
    }
    // 直接插入数据
    L->a[L->size++] = x;
}
// 头部插入
void slpushfront(SeqList *L, ElemType x)
{
    assert(L != NULL);
    if (L->size == L->maxsize)
    {
        ElemType *tmp = (ElemType *)realloc(L->a, L->maxsize * 2 * sizeof(ElemType));
        if (tmp == NULL)
        {
            printf("realloc fail!");
            return -1;
        }
        for (int i = L->maxsize; i > 0; i--)
        {
            tmp[i] = L->a[i - 1];
        }
        tmp[0] = x;
        L->a = tmp;
        L->maxsize *= 2;
        L->size++;
    }
    else
    {
        for (int i = L->size; i > 0; i--)
        {
            L->a[i] = L->a[i - 1];
        }
        L->a[0] = x;
        L->size++;
    }
}
// 尾部删除
void spopback(SeqList *L)
{
    assert(L != NULL);
    L->a[L->size - 1] = 0;
    L->size--;
}
// 头部删除
void spopfront(SeqList *L)
{
    assert(L != NULL);
    for (int i = 0; i < L->size - 1; i++)
    {
        L->a[i] = L->a[i + 1];
    }
    L->a[L->size - 1] = 0;
    L->size--;
}
// 指定位置之前插入数据
void slinsert(SeqList *L,int pos,ElemType x)
{
    assert(L!=NULL);
    assert(pos >=0 && pos<=L->size);
    if(L->size==L->maxsize){
        ElemType *tmp = (ElemType *)realloc(L->a, L->maxsize * 2 * sizeof(ElemType));
        if(tmp=NULL){
            return -1;
        }
        L->a=tmp;
        L->maxsize*=2;
    }
    for(int i=L->size-1;i>pos-1;i--){
        L->a[i+1]=L->a[i];
    }
    L->a[pos]=x;
    L->size++;
}
// 删除指定位置的数据
void slerase(SeqList *L,int pos)
{
    assert(L!=NULL);
    assert(pos >=0 && pos<=L->size);
    for(int i=pos;i<L->size-1;i++){
        L->a[i]=L->a[i+1];
    }
    L->size--;
}
// 查找数据
bool slindex(SeqList *L,ElemType x)
{
    assert(L!=NULL);
    for(int i=0;i<L->size;i++){
        if(L->a[i] == x){
            return true;
        }
    }
    return false;
}
int main()
{
    SeqList L;
    InitList(&L);
    slpushfront(&L,1);
    slpushfront(&L,2);
    slpushfront(&L,3);
    slpushfront(&L,4);
    slpushfront(&L,5);
    slinsert(&L,1,10);
    slinsert(&L,2,40);
    slerase(&L,0);
    slerase(&L,1);
    if(slindex(&L,4)){
        printf("找到了\n");
    }
    else{
        printf("没找到\n");
    }
    for (int i = 0; i < L.size; i++)
    {
        printf("%d ", L.a[i]);
    }
    DestroyList(&L);
    return 0;
}