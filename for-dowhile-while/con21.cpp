//0.5,1,0.2,5,...,n
#include<iostream>
using namespace std;
int main()
{
    float a=0.5,b=10;
    int i,z=0;
    cout<<"\n"<<a;
    for(i=0;i<=8;i++)
    {
        float c=z+0.5;
        a=a+c;
        cout<<"\n"<<a;
        z++;
    }
}