#include<stdio.h>
#include<math.h>
int main()
{
    int a=5, b=2, c=6;
    float x1, x2;

    if(b*b>4*a*c)
    {
        x1 = -b+sqrt(b*b-4*a*c)/2*a;
        x2 = -b-sqrt(b*b-4*a*c)/2*a;
        printf("\n x1=%f, x2=%f, x1,x2");
    }
    else
    printf("\n Roots are imaginary");
    return 0;
}