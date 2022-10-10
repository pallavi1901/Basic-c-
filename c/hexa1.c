#include<stdio.h>

int main()
{
    int a, b;
    for(a=2; a>=0; a--)
    {
        for(b=0; b<=2; b++)
        {
            if(a==b)
            {
                printf("1");

            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
    
}