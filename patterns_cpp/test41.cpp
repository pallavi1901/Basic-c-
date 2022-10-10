#include <iostream>
using namespace std;

void Pallindrome_number(int n)       //parameterized function
{
    int rem, sum=0;
   
    int temp = n;

    while( n>0)
    {
        rem = n%10;
        sum = sum*10 + rem;
        n = n/10;
    }
    cout<<" Pallindrome number"<<endl;
    
    if ( temp == sum)
    {
        cout<<"It is Pallindrome number"<<endl;
    }
    else
    {
        cout<<"It is not pallindrome"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    Pallindrome_number(n);       // we have given runtime value to parameter
    return 0;
}