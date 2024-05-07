#include <stdio.h>
#include <string.h>
// strlen()求字符串\0之前的字符个数，返回值是size_t
int main()
{
    char a[] = "asdasd";
    printf("%d", (int)strlen(a));
    return 0;
}