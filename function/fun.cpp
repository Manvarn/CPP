//simple interest
//nanr
#include<iostream>
using namespace std;
int main()
{
    void simple();
    simple();
}
void simple()
{
    int p,r,n,si,total;
    cout<<"\n enter p : ";
    cin>>p;
    cout<<"\n enter r : ";
    cin>>r;
    cout<<"\n enter n : ";
    cin>>n;

    si=(p*r*n)/100;
    total=si+p;
    cout<<"\n si : "<<(p*r*n)/100;
    cout<<"\n total : "<<si+p;
}