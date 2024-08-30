//compound interest
//wawr
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int p,n;
    float r;
    int compound(int,int,float);
    
    cout<<"\n enter  p : ";
    cin>>p;
    cout<<"\n enter  n : ";
    cin>>n;
    cout<<"\n enter  r : ";
    cin>>r;

    cout<<"\n compound : "<<compound(p,n,r);
}
int compound(int p, int n, float r)
{
    return p*pow((1+r/100),n);
}