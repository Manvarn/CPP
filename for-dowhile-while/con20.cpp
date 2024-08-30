//1,4,12,32,...,n
#include<iostream>
using namespace std;
int main()
{
    int i,a=1;
    for(i=1;i<=100;i=i*2)
    {
        cout<<"\n"<<i*a;
        a++;
    }
}