// enter n=5/ 5*1=5
#include<iostream>
using namespace std;
int main()
{
    int n,i,a;
    cout<<"\n enter n : ";
    cin>>n;

    for(i=1;i<=10;i++)
    {
        a=n*i;
        cout<<"\n"<<i;       
        cout<<"x"<<n;
        cout<<"="<<a;
    }
} 