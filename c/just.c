#include<stdio.h>

int main()
{
    int a, z;
    int x = 10; int y= 12;
    z = x*y++;
    a = x*y;
    printf("%d, %d", z, a);
    return 0;
}