#include<iostream>
using namespace std;
int main()
{
    int n,i,a;
    cout<<"\n enter n : ";
    cin>>n;

    i=1;
    do
    {
        a=n*i;
        cout<<"\n"<<i;       
        cout<<"x"<<n;
        cout<<"="<<a;
        i++;
    }while(i<=10);
} 