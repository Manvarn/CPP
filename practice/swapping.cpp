#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;

    c=a;
    a=b;
    b=c;
    
    cout<<"\n a :"<<a;
    cout<<"\n b :"<<b;
}