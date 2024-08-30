//compound interest
//wanr
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int p,n;
    float r;
    void compound(int,int,float);
    cout<<"\n enter  p : ";
    cin>>p;
    cout<<"\n enter  n : ";
    cin>>n;
    cout<<"\n enter  r : ";
    cin>>r;

    compound(p,n,r);
}
void compound(int p,int n,float r)
{
   cout<<"\n compound insterest : "<<p*pow((1+r/100),n);
}