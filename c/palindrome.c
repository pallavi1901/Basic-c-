#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, rem , rev = 0;
    printf("\nenter any number:" );
    scanf("\n%d", &n);

    while(n>0)
    {
           rem = n%10;
           rev = rev*10 + rem;
           n = n/10;
    }
    printf("\n%d", rev);

    return 0;
}