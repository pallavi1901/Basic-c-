#include<stdio.h>
#include<stdlib.h>


int main()
{
    int arr[5];
    int i;
    printf("\nenter elements in array: ");

    for( i = 0; i<5; i++)
    {
        scanf("%d", &arr[i]);

    }
    printf("\nelements in this array: ");

    for( i = 0; i<5; i++)
    {
        printf("\n%d", &arr[i]);
    }

   
    printf("\nenter elements in array: ");
    for( i = 4; i<=0; i--)
    {
        scanf("%d", &arr[i]);

    }
    printf("\nreversed elements of this array: ");

    for( i = 4; i<=0; i--)
    {
        printf("\n%d", &arr[i]);
    }
    
     return 0;
}