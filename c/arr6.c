#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n;
    int arr[n];
    scanf("enter the size of an array you want: %d",&n);

    printf("enter the elements in given array: ");
    int i;
    int j;

    int flag=0;
    int pcount=0;

    for(i=0; i<n; i++)
    {
        scanf(" %d ",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
         for(j=2; j<=arr[n]; j++)
         {
             if(arr[i]%j==0)
             {
                 flag=1;
                 pcount++;
                 break;
             }
         }
    }

    if(flag)
    {
        printf(" %d ", pcount);
    }

    return 0;
}