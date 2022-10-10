#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10];
    
    int ecnt=0;
    int ocnt=0;

    printf("enter ten no in given array: ");

    for(int i = 0; i<10; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            ecnt++;
        }
        else
        {
            ocnt++;
        }
        
    }
    printf("\nTotal even nos are: %d", ecnt);
    printf("\nTotal odd nos are: %d", ocnt);


    return 0;
}