//compound interest
//nanr
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    void compound();
    compound();
}
void compound()
{
    int p,n;
    float r;
    cout<<"\n enter  p : ";
    cin>>p;
    cout<<"\n enter  n : ";
    cin>>n;
    cout<<"\n enter  r : ";
    cin>>r;

    cout<<"\n compound insterest : "<<p*pow((1+r/100),n);
}