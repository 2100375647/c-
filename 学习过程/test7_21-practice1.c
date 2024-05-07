#include <stdio.h>
int main()
{
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(short int));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(unsigned char));
    printf("%d\n",sizeof(unsigned short));
    printf("%d\n",sizeof(unsigned int));
    printf("%d\n",sizeof(unsigned long));
    printf("%d\n",sizeof(unsigned long long));
    return 0;
}
//char 的取值范围是   -128至127
//unsigend char 的取值范围是  0至256
//short 的取值范围是  -32768至32767
//unsigend short 的取值范围是 0至65535
//int 的取值范围是  -2147483648至2147483647
//unsigend int 的取值范围是  0至4294967295