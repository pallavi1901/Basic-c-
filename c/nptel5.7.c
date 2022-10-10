#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[]="NPTEL";
    char str2[]={'P','R','O','G','R','A','M','M','I','N','G'};
    int n1=sizeof(str1)/sizeof(str1[0]);
    int n2=sizeof(str2)/sizeof(str2[0]);
    printf("n1=%d,n2=%d",n1,n2);
    return 0;
}