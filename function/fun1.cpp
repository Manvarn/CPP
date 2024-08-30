//simple interest
//wanr
#include<iostream>
using namespace std;
int main()
{
    int p,r,n,si,total;
    void simple(int,int,int,int,int);
    cout<<"\n enter p : ";
    cin>>p;
    cout<<"\n enter r : ";
    cin>>r;
    cout<<"\n enter n : ";
    cin>>n;


    simple(p,n,r,si,total);
}
void simple(int p,int n, int r, int si, int total)
{
    si=(p*r*n)/100;
    total=si+p;
    cout<<"\n si : "<<(p*r*n)/100;
    cout<<"\n total : "<<si+p;
}
    

    