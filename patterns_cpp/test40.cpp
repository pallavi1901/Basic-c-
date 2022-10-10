#include <iostream>
using namespace std;

void Armstrong_number()         
{
    int n, rem, sum=0;
    cin>>n;
    int  temp =n;

    while( n>0)
    {
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    cout<<"Sum: "<<sum<<endl;

    if( temp == sum)
    {
        cout<<"It is an armstrong number"<<endl;
    }
    else
    {
        cout<<"It is not an armstrong number"<<endl;
    }

}

int main()
{
    Armstrong_number();
    return 0;
}