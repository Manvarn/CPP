#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c;
    while(c!=0)
    {
    cout<<"\n a : "<<a;
    cout<<"\n b: "<<b;
    cout<<"\n 1. additon";
    cout<<"\n 1. subtraction";
    cout<<"\n 1. multiplication";
    cout<<"\n 1. division";
    cout<<"\n enter your choice : ";
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<"\n\n a+b : "<<a+b;
        break;
    case 2:
        cout<<"\n\n a-b : "<<a-b;
        break;
    case 3:
        cout<<"\n\n a*b : "<<a*b;
        break;
    case 4:
        cout<<"\n\n a/b : "<<a/b;
        break;            
    default:
    cout<<"\n wrong ! choice...";
    break;
    }
    }
}