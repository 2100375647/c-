//模拟实现offsetof()
#include <stdio.h>
#define offsetof(type, member) ((size_t) &((type *)0)->member)
struct s
{
    char s1;
    int a;
    char s2;
};

int main()
{
    struct s s={'s',8,'e'};
    printf("%d\n",offsetof(struct s,s1));
    printf("%d\n",offsetof(struct s,a));
    printf("%d\n",offsetof(struct s,s2));
    return 0;
}