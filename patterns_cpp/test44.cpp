#include<iostream>
using namespace std;

int main()
{   
    
    int n, rem, sum=0;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int temp=n;

    
    do
    {
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n = n/10;
        
    } while(n>0);
    {
      cout<<"sum"<<sum<<endl;  
    }

    if(temp==sum)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"not an armstrong number"<<endl;
    }
    return 0;

    
}