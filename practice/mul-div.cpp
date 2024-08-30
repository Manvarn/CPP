#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\n enter a : ";
    cin>>a;
    cout<<"\n enter b : ";
    cin>>b;

    c=a*b;
    cout<<"\n c : "<<a*b;

    if (c%21==0)
    {
        cout<<"\n c is divisible..."<<c;
    }
    else
    {
         cout<<"\n c is not divisible..."<<c;
    }
}