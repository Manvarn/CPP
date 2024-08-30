#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"\n enter a : ";
    cin>>a;
    cout<<"\n enter b : ";
    cin>>b;

    c=a*b;
    cout<<"\n c : "<<a*b;

    d=a+b;
    cout<<"\n d : "<<a+b;

    if (d%c==0)
    {
        cout<<"\n is divisible...";
    }
    else
    {
         cout<<"\n is not divisible...";
    }
}
