#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j;
    for( i=1; i<=n; ++i)
    {
        for( j=1; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
        for( j=1; j<=2*n-2*i; ++j)
        {
            cout<<" "<<" ";
        }
        for( j=1; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for( i=n ; i>=1; --i)
    {
        for( j=1; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
        for( j=1 ; j<= 2*n-2*i ; j++)        //or int space= 2*n-2*i and j<=space
        {
            cout<<" "<<" ";
        }
        for( j=1; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}