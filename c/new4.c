#include<stdio.h>
#include<stdlib.h>
#define size 100

int main()
{
    int arr[size], n, i, max, min;
    int sum = 0;

    printf("\nhow many elements you want in array: ");
    scanf("\n%d", n);

    printf("\nenter any %d nos in given array: ");
    for(i = 0; i<n; i++)
    {
         sum = sum + arr[i];
    }
    printf("\ntotal is %d: ", sum);

    int avg = sum/n;

    printf("\average is %d: ",avg);

    return 0;

}