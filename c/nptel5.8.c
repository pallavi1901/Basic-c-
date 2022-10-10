#include<stdio.h>
int main()
{
    int*ptr, a=5;
    ptr =&a;
    *ptr =*ptr-3;
    printf("%d,%d",*ptr,a);
    return 0;
}