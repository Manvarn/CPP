//compound interest
//wanr
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    int compound();
    a=compound();
    cout<<"\n compound : "<<a;
}
int compound()
{
    int p,n;
    float r;
    
    cout<<"\n enter  p : ";
    cin>>p;
    cout<<"\n enter  n : ";
    cin>>n;
    cout<<"\n enter  r : ";
    cin>>r;

    return p*pow((1+r/100),n);
}