#include<stdio.h>
#include<stdlib.h>
#define size 100

int main()
{
    int arr[size], n , i , min, max;

    printf("\nhow many elements do you want in array: ");
    scanf("%d", &n);

    printf("\nenter any %d elements in array: "); 
    for(i = 0; i<n; i++)
    {
        scanf("\n%d", &arr[i]);

    }

    min = arr[0];
    max = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i]<min)
        {
            arr[i]=min;
        }
        else{
            arr[i]=max;
        }
    }

    printf("\n the greatest element is %d: ", max);
    printf("\n the smallest element is %d: ", min);


}