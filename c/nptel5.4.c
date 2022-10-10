#include<stdio.h>

int main()
{
    switch(printf("C"))
    {
        default:
        printf("Default");
        case 1:printf("Choice1");
        break;
        case 2:printf("Choice2");
        break;
    }
    return 0;
}