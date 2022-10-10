#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool IsPrime = true;
   

    if ( n==0 || n==1)
    {
        IsPrime = false;
    }
    else
    {
        for ( int i = 2; i<=sqrt(n); ++i)
        {
            if ( n%i==0)
            {
                IsPrime = false;
                break;
            }
        }
    }
    if(IsPrime)
    {
        cout<<"is a prime"<<endl;
    }
    else
    {
        cout<<"not a prime"<<endl;
    }
    return 0;


}