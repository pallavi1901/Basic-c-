#include<stdio.h>
int main()
{
    int a=2, b=3, c=5, d=8, ans;
    ans = a-b+c*a/d%b;
    printf("The answer will be %d", ans);
    return 0;
}