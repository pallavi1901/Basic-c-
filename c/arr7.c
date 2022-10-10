#include<stdio.h>
#include<stdlib.h>
void printArray(int arr[], int size)
{   
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int first[10]={2, 4};
    printArray(first,10);

    int second[4]={89,23, 44,78};
    printArray(second,4);

    int third[4];
    printArray(third,4);

    return 0;
}