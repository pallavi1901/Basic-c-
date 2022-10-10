#include<stdio.h>
int main()
{
    int p=6, q=4, r=10;

    if(p>q)
    {
        if(p>r)
        printf("%d",p);
        else
        printf("%d",r);
    }
    else
    {
        if(r>q)
        printf("%d",r+q);
        else
        printf("%d",q);

    }
    return 0;
}