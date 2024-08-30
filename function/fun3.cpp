//simple interest
//wawr
#include<iostream>
using namespace std;
int main()
{
    int p,n,r;
    int simple(int,int,int);
   
    cout<<"\n enter  p : ";
    cin>>p;
    cout<<"\n enter  n : ";
    cin>>n;
    cout<<"\n enter  r : ";
    cin>>r;

    cout<<"\n simple : "<<simple(p,n,r);
}
int simple(int p,int r,int n)
{
   return p*n*r/100;
}
    

    