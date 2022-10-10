#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n; 
    int arr[n];
    scanf("%d", &n);

    int ecount=0;
    int ocount=0;


    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0);
        {
             ecount++;
        }
        else
        {
            ocount++;
        }
    }

    printf("no.of even nos in given array: %d", ecount);
    printf("no.of odd nos in given array: %d", ocount);

    return 0;

}