#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[n];
    cin>>n;

    printf("enter the nos in given array: ");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

     for(int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    printf("maximum no is: %d", max)
    printf("minimum no is: %d", min)

    return 0;

}