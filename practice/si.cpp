#include<iostream>
using namespace std;
int main()
{
    int p,r,n,si,total;
    cout<<"enter p : ";
    cin>>p;
    cout<<"enter r : ";
    cin>>r;
    cout<<"enter n : ";
    cin>>n;

    si=(p*r*n)/100;
    total=si+p;
    cout<<"\n si : "<<(p*r*n)/100;
    cout<<"\n total : "<<si+p;
}