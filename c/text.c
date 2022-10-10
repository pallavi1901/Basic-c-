//array is the collection of same datatype allocating memory continuously

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int arr[5] = {10,20,30,40,50};
    
    for(int i = 0; i<5; i++)   //i=5<5
    {
        printf("\n%d", arr[i]);  //10 20 30 40 50

    }
    return 0;
}