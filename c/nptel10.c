#include<stdio.h>

int main()
{
    int a=5, b=7, c=111;
    c/=++a*b--;
    printf("%d %d %d",a, b, c);

}